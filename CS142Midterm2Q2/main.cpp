#include <iostream>

using namespace std;

/*** WRITE YOUR MakeGuess FUNCTION HERE ***/
bool MakeGuess(int& lowerBound, int& upperBound) {
    char userResponse;
    int compGuess = (lowerBound + upperBound) / 2;
    cout << "Is " << compGuess << " your number? (y/l/h): " << endl;
    cin >> userResponse;
    if(userResponse == 'Y' || userResponse == 'y') {
        return true;
    } else if (userResponse == 'L' || userResponse == 'l') {
        upperBound = compGuess - 1;
        return false;
    } else {
        lowerBound = compGuess + 1;
        return false;
    }
}

/***** DO NOT CHANGE ANYTHING BENEATH THIS LINE!!!! LOOK, DON'T TOUCH!!! *****/

void Win(){
    cout << "\nI win!!!\n";
}

int main(){
   int upperBound = 1000;
   int lowerBound = 1;
   const int NUM_GUESSES = 10;

   cout << "Welcome to Guess YOUR Number!\nThis program guesses a number YOU pick between 1 and 1000 in 10 guesses or less.\n";
   cout << "Please think of a number between 1 and 1000 (inclusive).\n";
   cout << "Press enter when you have a number in mind and are ready to continue...\n";

   string userInput;
   getline(cin, userInput);

   for(int i = 0; i < NUM_GUESSES; i++){
      if(MakeGuess(lowerBound, upperBound)){
         Win();
         return 0;
      }
   }
   cout << "... cheater." << endl;

   return 0;
}



