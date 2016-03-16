/* 
 * File:   Poker.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 5:42 PM
 */

#include <iostream>
#include <string>
#include "Player.h"
#include "Poker.h"
#include "Deck.h"
using namespace std;

Poker::Poker() {
    cout << "Poker!" << endl;
    int i;
    cout << "How many players? (2-7) " << endl;
    cin >> i;
    while (i < 2 || i > 7) {
        cout << "Invalid number of players, try again" << endl;
        cout << "How many players? (2-7) " << endl;
        cin >> i;
    }
    for (int j = 1; j <= i; j++) {
        cout << "Enter name of player " << j << ":" << endl;
        string name;
        cin >> name;
        Player player(name);
        addPlayer(player);
    }
}

void Poker::display() {
    cout << "Poker Game" << endl;
    CardGame::display();
}

void Poker::play() {
    deck_.shuffle();
    deal(5);
    display();
    bet();
    tradeIn();
    bet();
    score();
}

void Poker::bet() {
    cout << "Betting..." << endl;
}

void Poker::tradeIn() {
    cout << "Trading in..." << endl;
}

void Poker::score() {
    cout << "Scoring..." << endl;
    cout << players_[0].getName() << " wins!!" << endl;
    display();
}