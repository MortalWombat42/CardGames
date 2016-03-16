/* 
 * File:   Deck.h
 * Author: Alex Grech IV
 *
 * Created on March 1, 2016, 1:41 AM
 */

#ifndef DECK_H
#define	DECK_H
#include "CardPile.h"

class Deck : public CardPile {
public:
    Deck();
    void shuffle();
    virtual Card& drawFrom();
};

#endif	/* DECK_H */

