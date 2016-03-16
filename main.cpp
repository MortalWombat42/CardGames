/* 
 * File:   main.cpp
 * Author: Alex Grech IV
 *
 * Created on February 29, 2016, 8:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Deck.h"
#include "Poker.h"
#include "Bridge.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Poker poker;
    poker.play();
    Bridge bridge;
    bridge.play();
    return 0;
}

