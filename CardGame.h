/* 
 * File:   CardGame.h
 * Author: Alex Grech IV
 *
 * Created on March 1, 2016, 5:14 PM
 */

#ifndef CARDGAME_H
#define	CARDGAME_H
#include <vector>
#include "Deck.h"
#include "Player.h"
using namespace std;

class CardGame {
public:
    CardGame();
    void deal(int i);
    virtual void display() const;
    virtual void play() = 0;
protected:
    void addPlayer(Player&);
    Deck deck_;
    vector<Player> players_;
};

#endif	/* CARDGAME_H */

