#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
#include <string>
using namespace std;

class ItemToPurchase {
public:
    void SetName(string newName);       //Mutator
    void SetPrice(double newPrice);     //Mutator
    void SetQuantity(int newQuantity);  //Mutator
    string GetName() const;             //Accessor
    double GetPrice() const;            //Accessor
    int GetQuantity() const;            //Accessor

private:
    string itemName = "none";   //- Initialized in default constructor to "none"
    double itemPrice = 0.0;     //- Initialized in default constructor to 0.0
    int itemQuantity = 0;       //- Initialized in default constructor to 0
};

#endif //ITEMTOPURCHASE_H
