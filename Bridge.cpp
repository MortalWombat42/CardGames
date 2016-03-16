/* 
 * File:   Bridge.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 7:05 PM
 */

#include <iostream>
#include <string>
#include "Bridge.h"
#include "Player.h"
#include "Deck.h"
using namespace std;

Bridge::Bridge() {
    cout << "Bridge!" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            cout << "Enter name of player " << j << " of team " << i << ":" << endl;
            string name;
            cin >> name;
            Player player(name);
            addPlayer(player);
        }
    }
}

void Bridge::display() {
    cout << "Bridge Game" << endl;
    for (int i = 1; i <= 2; i++) {
        cout << "Team " << i << ":" << endl;
        for (int j = 1; j <= 2; j++) {
            switch (i) {
                case 1: players_[j - 1].display();
                    break;
                case 2: players_[j + 1].display();
                    break;
            }
        }
    }
}

void Bridge::play() {
    deck_.shuffle();
    deal(13);
    display();
    bid();
    trick();
    score();
}

void Bridge::bid() {
    cout << "Bidding..." << endl;
}

void Bridge::trick() {
    cout << "Playing tricks..." << endl;
}

void Bridge::score() {
    cout << "Scoring..." << endl;
    cout << "Team 1 wins!!" << endl;
    display();
}