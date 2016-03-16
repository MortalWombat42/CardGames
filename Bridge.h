/* 
 * File:   Bridge.h
 * Author: Alex Grech IV
 *
 * Created on March 1, 2016, 7:05 PM
 */

#ifndef BRIDGE_H
#define	BRIDGE_H
#include "CardGame.h"
#include "Deck.h"

class Bridge : public CardGame {
public:
    Bridge();
    void display();
    void play();
    void bid();
    void trick();
    void score();
private:
};

#endif	/* BRIDGE_H */

