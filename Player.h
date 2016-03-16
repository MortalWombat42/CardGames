/* 
 * File:   Player.h
 * Author: Alex Grech IV
 *
 * Created on March 1, 2016, 3:55 PM
 */

#ifndef PLAYER_H
#define	PLAYER_H
#include <string>
#include "Hand.h"
using namespace std;

class Player {
public:
    Player(string);
    Player(string, Hand&);
    void setName(string);
    void setHand(Hand&);
    string getName() const;
    Card& play(int);
    void draw(Card&);
    void display() const;
private:
    string name_;
    Hand hand_;
};

#endif	/* PLAYER_H */

