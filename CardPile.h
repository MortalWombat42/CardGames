/* 
 * File:   CardPile.h
 * Author: Alex Grech IV
 *
 * Created on February 29, 2016, 10:33 PM
 */

#ifndef CARDPILE_H
#define	CARDPILE_H
#include <vector>
#include "Card.h"
using namespace std;

class CardPile {
public:
    CardPile();
    void addTo(const Card&);
    virtual Card& drawFrom(int);
    void display() const;
    int getSize() const;
protected:
    vector<Card> pile_;
};

#endif	/* CARDPILE_H */

