#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> userWeights(5);
    double totalWeight = 0;
    double averageWeight = 0;
    double maxWeight = 0;


    for(int i = 0; i < 5; i++) {
        cout << "Enter weight" << i + 1 << ": ";
        cin  >> userWeights.at(i);
        cout << endl;
    }

    cout << "You entered: ";
    for(int i = 0; i < 5; i++) {
        cout << userWeights.at(i) << " ";
    }
    cout << endl;

    for(int i = 0; i < 5; i++) {
        totalWeight += userWeights.at(i);
    }
    cout << "Total weight: " << totalWeight << endl;

    averageWeight = totalWeight / 5;
    cout << "Average weight: " << averageWeight << endl;

    for(int i = 0; i < 5; i++) {
        if(maxWeight < userWeights.at(i))
        maxWeight = userWeights.at(i);
    }
    cout << "Max weight: " << maxWeight << endl;

    return 0;
}
