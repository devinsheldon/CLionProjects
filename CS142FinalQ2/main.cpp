#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void PrintArray(int array[ARRAY_SIZE]) {
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int nums[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++) {
        cin >> nums[i];
    }

    string stringInput = "";
    cin >> stringInput;

    if(stringInput == "print") {
        PrintArray(nums);
        cout << endl;

    } else if(stringInput == "divide") {
        for(int i = 0; i < ARRAY_SIZE; i++) {
            if(nums[i] % 2 == 0) {
                nums[i] = 1;
            } else {
                nums[i] = 0;
            }
        }
        PrintArray(nums);
        cout << endl;

    } else if(stringInput == "reverse") {
        for(int i = ARRAY_SIZE - 1; i >= 0; i--) {
            cout << nums[i] << " ";
        }

    } else if(stringInput == "none") {
    }

    return 0;
}
