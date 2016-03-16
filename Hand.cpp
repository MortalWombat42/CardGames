/* 
 * File:   Hand.cpp
 * Author: Alex Grech IV
 * 
 * Created on March 1, 2016, 2:44 PM
 */

#include <iostream>
#include "Hand.h"

Hand::Hand() {
}

void Hand::order() {
    for (int i = getSize() - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            int val1 = pile_[j].numValue();
            int val2 = pile_[j + 1].numValue();
            int suit1 = pile_[j].numSuit();
            int suit2 = pile_[j + 1].numSuit();
            if ((val1 > val2) || (val1 == val2 && suit1 > suit2)) {
                swap(pile_[j], pile_[j + 1]);
                //display();
            }
        }
    }
}

