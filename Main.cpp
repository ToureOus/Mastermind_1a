
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


}


void Code::Play() {


}


vector<int> Code::guessV() {


}


int Code::checkCorrect(vector<int> guess) {


}


int Code::checkIncorrect(vector<int> guess){


}


void Code::Randomized() {
	secretcode.clear();
	for (int i = 0; i < n; ++i) {
		secretcode.push_back(rand() % m);
	}
}