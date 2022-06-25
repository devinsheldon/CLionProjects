#include <iostream>
#include <vector>

using namespace std;

const int NUM_SHIPS = 6;
const int PLAYER_1 = 0;
const int PLAYER_2 = 1;


void InitializePlayers(vector<vector<string>> &players);

void EvaluateGuess(const string &guess, vector<string> &targetPlayer);

/*
TODO: Test case
A1 A2 A3 A4 A5 B1
B2 B3 B4 B5 C1 C2
A1
A1
A2
A2
A3
A3
A4
A4
A5
A5
B1
B1
*/

int main() {
    vector<vector<string>> players(2); // a 2D vector
    bool whoseTurn = PLAYER_2; // false == Player 1 | true == Player 2

    InitializePlayers(players);


    while (!players.at(PLAYER_1).empty() && !players.at(PLAYER_2).empty()) {
        whoseTurn = !whoseTurn; // change it to next person's turn (PLAYER_1 is first)
        cout << "It is player " << whoseTurn + 1 << "'s turn. Enter a guess: ";
        string guess;
        cin >> guess;
        cout << endl;

        if (whoseTurn == PLAYER_1) {
            EvaluateGuess(guess, players.at(PLAYER_2));
        } else if (whoseTurn == PLAYER_2) {
            EvaluateGuess(guess, players.at(PLAYER_1));
        }
    }

    cout << "Player "<< ((whoseTurn==PLAYER_1)?"1":"2") <<" is the winner. Their unsunk ships were at: ";
    for (int i = 0; i < players.at(whoseTurn).size(); i++) {
        cout << players.at(whoseTurn).at(i) << " ";
    }
    return 0;
}

void InitializePlayers(vector<vector<string>> &playersShips) {
    for (int i = 0; i < playersShips.size(); i++) {
        cout << "Enter Player " << i + 1 << "'s chosen coordinates: ";
        string ship;
        for (int j = 0; j < NUM_SHIPS; j++) {
            cin >> ship;
            playersShips.at(i).push_back(ship);
        }
        cout << endl;
    }
}

void EvaluateGuess(const string &guess, vector<string> &targetPlayer) {
    string result = "miss. ";
    for (int i = 0; i < targetPlayer.size(); i++) { // player 2's ships
        if (guess == targetPlayer.at(i)) {
            targetPlayer.erase(targetPlayer.begin() + i);
            result = "hit! ";
            break;
        }
    }
    cout << guess << " was a " << result;
}

