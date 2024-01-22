
#include "Code.h" 
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


Code::Code(int nValue, int mValue) {
	n = nValue;
	m = mValue;
	srand(time(0)); // Seed for random number generation
	Randomized(); // Call to generate the secret code
}


void Code::Start() {
cout<<"Welcome to MasterMind!"<<endl;
cout<<"Please enter the length of my sequence: ";
cin>>nValue>>endl;


}


void Code::Play() {
    Start(); // Display welcome screen and instructions

    while (guesses < 10) { // Limit the number of guesses
        vector<int> guess = guessV();
        int correct = checkCorrect(guess);
        int incorrect = checkIncorrect(guess);

        cout << "Correct digits in correct place: " << correct << endl;
        cout << "Correct digits in wrong place: " << incorrect << endl;

        if (correct == n) {
            cout << "Congratulations! You've guessed the code." << endl;
            return; // Exit the loop and function if the player wins
        }

        guesses++;
    }

    cout << "Game over. The correct code was: ";
    for (int digit : secretcode) {
        cout << digit << " ";
    }
    cout << endl;
}

}



vector<int> Code::guessV() {
    vector<int> guess;
    int input;

    cout << "Enter your guess (" << n << " digits, each between 0 and " << m - 1 << "): ";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        // Validate input
        if (input >= 0 && input < m) { //is valid input but not greater than m, push it into the stack
            guess.push_back(input);
        }
        else {// Handle invalid input
            cout << "Invalid digit. Please enter a digit between 0 and " << m - 1 << ": ";
            --i; // Decrement to redo the input
        }
    }
    return guess;
}


int Code::checkCorrect(vector<int> guess) {
	correctCount = 0;

	//loop
	return correctCount;

}


int Code::checkIncorrect(vector<int> guess){
	incorrectCount = 0;
	//loop
	return incorrectCount;


}


void Code::Randomized() {
	secretcode.clear();
	for (int i = 0; i < n; ++i) {
		secretcode.push_back(rand() % m);
	}
}