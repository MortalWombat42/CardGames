/* 
 * File:   CardGame.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 5:14 PM
 */

#include <iostream>
#include "CardGame.h"
#include "Deck.h"
using namespace std;

CardGame::CardGame() {
}

void CardGame::deal(int i) {
    while (i > 0) {
        for (int j = 0; j < players_.size(); j++) {
            if (deck_.getSize() > 0) {
                players_[j].draw(deck_.drawFrom());
            }
        }
        i--;
    }
}

void CardGame::display() const {
    for (int i = 0; i < players_.size(); i++) {
        players_[i].display();
    }
}

void CardGame::addPlayer(Player& player) {
    players_.push_back(player);
}