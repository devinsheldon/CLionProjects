#include <iostream>

using namespace std;

void PrintArray(int arr1[], int size);
int GetNumberOfEvenValues(int arr1[], int size);

const int ARRAY_SIZE = 10;

int main() {
    int nums[ARRAY_SIZE];

    // initializes nums
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cin >> nums[i];
    }

    // Print inputted array
    cout << "List: ";
    PrintArray(nums, ARRAY_SIZE);
    cout << endl;

    // Print number of even values
    cout << "Number of Even Values in the list: " << GetNumberOfEvenValues(nums, ARRAY_SIZE);

    return 0;
}

void PrintArray(int arr1[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
}

int GetNumberOfEvenValues(int arr1[], int size) {
    int numEvens = 0;
    for(int i = 0; i < size; i++) {
        if(arr1[i] % 2 == 0) {
            numEvens++;
        }
    }
    return numEvens;
}