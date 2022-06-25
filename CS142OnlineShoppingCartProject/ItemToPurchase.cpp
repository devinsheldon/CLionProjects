#include <string>
#include "ItemToPurchase.h"
using namespace std;

/*
// Default constructor
ItemToPurchase::ItemToPurchase() { // FIXME: Keeps giving an "exception" error
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
}
*/

// Member function definitions
void ItemToPurchase::SetName(string newName) {
    itemName = newName;
}

void ItemToPurchase::SetPrice(double newPrice) {
    itemPrice = newPrice;
}

void ItemToPurchase::SetQuantity(int newQuantity) {
    itemQuantity = newQuantity;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

double ItemToPurchase::GetPrice() const {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}