#include <iostream>
#include "Toy.h"

using namespace std;

int main() {
    Toy toy1("Truck", 8);
    Toy toy2("Blocks", 19);

    cout << toy1.ToString() << endl;
    cout << toy2.ToString() << endl;

    toy2.SetName("Blocks Plus");
    cout << toy2.ToString() << endl;

    int userNum = 0;
    cout << "How many more trucks would you like to stock?" << endl;
    cin >> userNum;
    toy1.SetNumInStock(toy1.GetNumInStock() + userNum);
    cout << toy1.ToString() << endl;

    return 0;
}