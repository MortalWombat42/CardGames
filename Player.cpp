/* 
 * File:   Player.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 3:55 PM
 */

#include <iostream>
#include <string>
#include "Player.h"
#include "Hand.h"
using namespace std;

Player::Player(string name) : name_(name) {
}

Player::Player(string name, Hand& hand) : name_(name) {
    setHand(hand);
}

void Player::setName(string name) {
    name_ = name;
}

void Player::setHand(Hand& hand) {
    hand_ = hand;
    hand_.order();
}

string Player::getName() const {
    return name_;
}

Card& Player::play(int i) {
    return hand_.drawFrom(i);
}

void Player::draw(Card& card) {
    hand_.addTo(card);
    hand_.order();
}

void Player::display() const {
    cout << name_ << "'s hand:" << endl;
    hand_.display();
}