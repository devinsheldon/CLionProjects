#include <iostream>
#include <vector>

using namespace std;

void ShowVector(vector<int> nums);
void InvertVector(vector<int>& nums);

int main() {
    int vectorSize = 0;
    int multiplier = 0;

    cout << "Please enter the size of the vector: " << endl;
    cin >> vectorSize;
    cout << "Please input the multiplier: " << endl;
    cin >> multiplier;

    vector<int> nums(vectorSize);
    for(int i = 0; i < vectorSize; i++) {
        nums.at(i) = i * multiplier;
    }

    ShowVector(nums);
    InvertVector(nums);
    ShowVector(nums);

    return 0;
}

void ShowVector(vector<int> nums) {
    for(int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl;
    }
}

void InvertVector(vector<int>& nums) {
    int temp;
    for(int i = 0; i < (nums.size() / 2); i++) {
        temp = nums.at(i);
        nums.at(i) = nums.at(nums.size() - 1 - i);
        nums.at(nums.size() - 1 - i) = temp;
    }
}