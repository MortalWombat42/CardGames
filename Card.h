/* 
 * File:   Card.h
 * Author: Alex Grech IV
 *
 * Created on February 29, 2016, 8:17 PM
 */

#ifndef CARD_H
#define	CARD_H
#include <string>
using namespace std;

class Card {
public:
    Card();
    Card(int, int);
    void setSuit(int);
    void setValue(int);
    string getSuit() const;
    string getValue() const;
    int numSuit() const;
    int numValue() const;
    friend ostream & operator<<(ostream &os, const Card & card);
private:

    enum Suit {
        heart, diamond, club, spade
    };

    enum Value {
        ace, two, three, four, five, six, seven, eight, nine, ten,
        jack, queen, king
    };
    Suit suit_;
    Value value_;
};


#endif	/* CARD_H */

