/* 
 * File:   Card.cpp
 * Author: Alex Grech IV
 * 
 * Created on February 29, 2016, 8:17 PM
 */

#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card() {
    setValue(0);
    setSuit(0);
}

Card::Card(int value, int suit) {
    setValue(value);
    setSuit(suit);
}

void Card::setSuit(int suit) {
    suit_ = static_cast<Suit> (suit);
}

void Card::setValue(int val) {
    value_ = static_cast<Value> (val);
}

string Card::getSuit() const {
    switch (suit_) {
        case heart: return "heart";
            break;
        case diamond: return "diamond";
            break;
        case club: return "club";
            break;
        case spade: return "spade";
            break;
    }
}

string Card::getValue() const {
    switch (value_) {
        case 0: return "ace";
            break;
        case 1: return "two";
            break;
        case 2: return "three";
            break;
        case 3: return "four";
            break;
        case 4: return "five";
            break;
        case 5: return "six";
            break;
        case 6: return "seven";
            break;
        case 7: return "eight";
            break;
        case 8: return "nine";
            break;
        case 9: return "ten";
            break;
        case 10: return "jack";
            break;
        case 11: return "queen";
            break;
        case 12: return "king";
            break;
    }
}

int Card::numSuit() const {
    return static_cast<int> (suit_);
}

int Card::numValue() const {
    return static_cast<int> (value_);
}

ostream & operator<<(ostream & os, const Card & card) {
    os << card.getValue() << " of " << card.getSuit() << "s" << endl;
    return os;
}