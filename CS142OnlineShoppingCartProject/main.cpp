#include <iostream>
#include <string>
#include <iomanip>
#include "ItemToPurchase.h"
using namespace std;

int main() {
    ItemToPurchase item1, item2;
    string name;
    double price;
    int quantity;

    //Initialize Item 1
    cout << "Item 1" << endl;
    cout << "Enter the item name: ";
    getline(cin, name);
    item1.SetName(name);
    cout << endl;

    cout << "Enter the item price: ";
    cin  >> price;
    item1.SetPrice(price);
    cout << endl;

    cout << "Enter the item quantity: ";
    cin  >> quantity;
    item1.SetQuantity(quantity);
    cout << endl;

    cout << endl;

    //Initialize Item 2
    cout << "Item 2" << endl;
    cout << "Enter the item name: ";
    cin.ignore(); // So getline() works correctly after a cin
    getline(cin, name);
    item2.SetName(name);
    cout << endl;

    cout << "Enter the item price: ";
    cin  >> price;
    item2.SetPrice(price);
    cout << endl;

    cout << "Enter the item quantity: ";
    cin  >> quantity;
    item2.SetQuantity(quantity);
    cout << endl;

    cout << endl;

    //Print cost of both items
    cout << "TOTAL COST" << endl;
    // Item 1 details
    cout << fixed << setprecision(2);
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice()
         << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
    // Item 2 details
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice()
         << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;

    cout << endl;

    cout << "Total: $" << ( item1.GetPrice() * item1.GetQuantity() ) +
                            ( item2.GetPrice() * item2.GetQuantity() );


    return 0;
}
