/* 
 * File:   CardPile.cpp
 * Author: Alex Grech IV
 * 
 * Created on February 29, 2016, 10:33 PM
 */

#include <iostream>
#include "CardPile.h"
using namespace std;

CardPile::CardPile() {
}

void CardPile::addTo(const Card& card) {
    pile_.push_back(card);
}

Card& CardPile::drawFrom(int i) {
    Card& card = pile_[i];
    pile_.erase(pile_.begin() + i);
    return card;
}

void CardPile::display() const {
    for (int i = 0; i < getSize(); i++) {
        cout << "Card " << i + 1 << ": " << pile_[i];
    }
}

int CardPile::getSize() const {
    return pile_.size();
}