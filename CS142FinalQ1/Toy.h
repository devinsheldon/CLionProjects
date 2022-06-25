//
// Created by sheld on 6/15/2022.
//

#ifndef TOY_H
#define TOY_H

#include <string>

using namespace std;

class Toy {

private:
    string name = "unknown";  // the toy name, e.g. firetruck
    int numInStock = -1;    // how many of this toy is in stock

    static const int MAX_IN_STOCK = 20;
    // maximum number of a toy that can be kept in stock

public:
    // Constructors
    /*
    Toy();
    */

    Toy(string toyName /* = "unknown" */, int stock /* = 0 */);

    void SetNumInStock(int stock);  // Mutators
    void SetName(string toyName);   // Mutators

    string ToString();  // Accessor

    string GetName() const { return name; }	    // Do NOT change
    int GetNumInStock() const { return numInStock; } // Do NOT change
};

#endif // TOY_H