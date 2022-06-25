#include <iostream>
#include <cstdlib>
using namespace std;

/* A function to handle printing a prompt and reading user input,
   returning the value of the user's input. */
int GetUserPathChoice(string choicePrompt, int numChoices);

/* Each prints scenario, calls GetUserPathChoice(), and returns user's choice */
int PlayBeginningScenario();
int PlayEscapeScenario();
int PlayDistractionScenario();
int PlayControlRoomScenario();

void PlayBoringEnding();
void PlayBananaEnding();
void PlayFreedomEnding();
void PlayEpicEnding();
void EndAdventure();

int main() {
    while(true) {
        int userPathChoice = 0; // The user will enter a number from 1 to 3 to indicate their choice
        userPathChoice = PlayBeginningScenario();

        if (userPathChoice == 1) {
            PlayBoringEnding();
        } else {
            userPathChoice = PlayEscapeScenario();
            if (userPathChoice == 1) {
                cout << "As you lie down and pretend to sleep, you realize how tired you are after all this planning. You" << endl;
                cout << "doze off. The next morning, you are moved to an even higher security cell. Drats! Back to the" << endl;
                cout << "drawing board..." << endl;
                for (int i = 0; i < 25; i++) {
                    cout << "* - ";
                }
                cout << "*" << endl;
                int randPrisonCell = rand() % 8999  + 1000;
                cout << "Welcome to your new home, prison cell " << randPrisonCell << "!" << endl;
                continue; // Loops back to start of the while loop
            } else {
                userPathChoice = PlayDistractionScenario();
                if (userPathChoice == 1) {
                    PlayBananaEnding();
                } else if (userPathChoice == 2) {
                    PlayFreedomEnding();
                } else {
                    userPathChoice = PlayControlRoomScenario();
                    if (userPathChoice == 1) {
                        PlayEpicEnding();
                    } else {
                        PlayFreedomEnding();
                    }
                }
            }
        }
    }

    return 0;
}


int GetUserPathChoice(string choicePrompt, int numChoices) {
    int userChoice = 0;
    cout << choicePrompt << endl;
    if(numChoices == 2) {
        cout << "Enter your choice as the number 1 or 2: " << endl;
    }
    else if (numChoices == 3) {
        cout << "Enter your choice as the number 1, 2, or 3: " << endl;
    }
    cin >> userChoice;
    return userChoice;
}

/* SCENARIOS */
int PlayBeginningScenario() {
    int numChoices = 2;
    string beginningPrompt = "You are a criminal mastermind imprisoned in a maximum security prison.\n"
                             "Do you...\n"
                             "1) decide to serve your time to pay your debt to society?\n"
                             "or\n"
                             "2) formulate a dubious plan to escape?";
    return GetUserPathChoice(beginningPrompt, numChoices);
}

int PlayEscapeScenario() {
    int numChoices = 2;
    string escapePrompt = "You spend months carefully preparing for your escape, and finally the anticipated night comes.\n"
                          "Do you...\n"
                          "1) pretend to sleep until the guards are gone?\n"
                          "or\n"
                          "2) create a distraction?";
    return GetUserPathChoice(escapePrompt, numChoices);
}

int PlayDistractionScenario() {
    int numChoices = 3;
    string distractionPrompt = "As the guards pass your cell, you throw a penny on the ground in front of them.\n"
                               "They bend over to pick it up and you sneakily pickpocket their keys! You exit your\n"
                               "cell after they leave and assess your options.\n"
                               "Do you...\n"
                               "1) sprint straight for the exit?\n"
                               "2) free everyone else first?\n"
                               "or\n"
                               "3) escape through the ventilation ducts?";
    return GetUserPathChoice(distractionPrompt, numChoices);
}

int PlayControlRoomScenario() {
    int numChoices = 2;
    string controlRoomPrompt = "You crawl through the ventilation ducts and stumble upon the main control room. You\n"
                               "deactivate the prison cameras and remove your name from the prison database so they'll\n"
                               "never find you again. You realize you could easily free everyone else too. Just as you\n"
                               "think this, you hear guards coming.\n"
                               "Do you...\n"
                               "1) run and save yourself?\n"
                               "or\n"
                               "2) free everyone else but risk capture?";
    return GetUserPathChoice(controlRoomPrompt, numChoices);
}

/* ENDINGS */
void PlayBoringEnding() {
    cout << "You decide you will wait patiently until you are at last free, fair and square. You wait a long time..." << endl;
    cout << endl;
    cout << "THE END" << endl;
    EndAdventure();
}

void PlayBananaEnding() {
    cout    << "As you sprint for the exit, you slip on a banana peel and accidentally hit and emergency lockdown button" << endl;
    cout    << "on the wall as you reach out to steady yourself. The guards rush in and capture you." << endl;
    cout    << "Have fun serving a life sentence!" << endl;
    cout    << endl;
    cout    << "THE END" << endl;
    EndAdventure();
}

void PlayFreedomEnding() {
    cout    << "You quickly find a control panel and use it to unlock every cell in the prison! Everyone rushes out," << endl;
    cout    << "overwhelming the guards. You all go free!" << endl;
    cout    << endl;
    cout    << "THE END" << endl;
    EndAdventure();
}

void PlayEpicEnding() {
    cout    << "You remotely lock all the doors in the prison except the ones that will let you escape, trapping all" << endl;
    cout    << "the guards! You walk out of the prison in epic slow-mo and retire on a tropical island, never to be seen again." << endl;
    cout    << endl;
    cout    << "THE END" << endl;
    EndAdventure();
}

/* OTHER */
void EndAdventure() {
    exit(0);
}