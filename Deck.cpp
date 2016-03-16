/* 
 * File:   Deck.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 1:41 AM
 */

#include <iostream>
#include <random>
#include <ctime>
#include "Deck.h"
#include "Card.h"

Deck::Deck() {
    for (int j = 0; j <= 3; j++) {
        for (int i = 0; i <= 12; i++) {
            Card card(i, j);
            addTo(card);
        }
    }
}

void Deck::shuffle() {
    if (getSize() > 0) {
        uniform_int_distribution<unsigned> dist(0, getSize());
        default_random_engine eng(time(0));
        for (int i = 0; i <= 7 * getSize(); i++) {
            swap(pile_[dist(eng)], pile_[dist(eng)]);
        }
    }
}

Card& Deck::drawFrom() {
    Card& card = pile_[getSize() - 1];
    pile_.pop_back();
    return card;
}