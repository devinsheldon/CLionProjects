//
// Created by sheld on 6/15/2022.
//

#include "Toy.h"

using namespace std;

/*
Toy::Toy() {
    name = "unknown";
    numInStock = -1;
}
*/

Toy::Toy(string toyName /*= "unknown" */, int stock /* = 0 */) {
    if(toyName.length() > 0) {
        name = toyName;
    } else {
        name = "unknown";
    }
    if(stock > MAX_IN_STOCK) {
        numInStock = MAX_IN_STOCK;
    }
    else if(stock >= 0) {
        numInStock = stock;
    }
}

void Toy::SetNumInStock(int stock) {
    if(stock > MAX_IN_STOCK) {
        numInStock = MAX_IN_STOCK;
    }
    else if(stock >= 0) {
        numInStock = stock;
    }
}

void Toy::SetName(string toyName) {
    if(toyName.length() > 0) {
        name = toyName;
    }
}

string Toy::ToString() {
    return (to_string(numInStock) + " " + GetName() + " in stock");
}