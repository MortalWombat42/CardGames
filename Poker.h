/* 
 * File:   Poker.h
 * Author: Alex Grech IV
 *
 * Created on March 1, 2016, 5:42 PM
 */

#ifndef POKER_H
#define	POKER_H
#include "CardGame.h"
#include "Deck.h"

class Poker : public CardGame {
public:
    Poker();
    void display();
    void play();
    void bet();
    void tradeIn();
    void score();
};

#endif	/* POKER_H */

