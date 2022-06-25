#include <iostream>
using namespace std;

int main() {
    char triangleChar = ' ';
    int triangleHeight = 0;

    cout << "Enter a character: " << endl;
    cin >> triangleChar;

    cout << "Enter triangle height: " << endl;
    cin >> triangleHeight;

    for(int i = 0; i < triangleHeight; i++) {
        for(int t = 0; t <= i; t++) {
            cout << triangleChar << " ";
        }
        cout << endl;
    }

    return 0;
}