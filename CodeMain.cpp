
#include "CodeHeader.h" 
#include <stdio.h>
#include <iostream>
#include <vector>


CodeHeader::CodeHeader(int nValue, int mValue) {
	n = nValue;
	m = mValue;
	srand(time(0)); // Seed for random number generation
	Randomized(); // Call to generate the secret code
}


void CodeHeader::Start() {


}


void CodeHeader::Play() {


}


vector<int> CodeHeader::Guess() {


}


int CodeHeader::checkCorrect(vector<int> guess) {


}


int CodeHeader::checkIncorrect(vector<int> guess){


}


void CodeHeader::Randomized() {
	secretcode.clear();
	for (int i = 0; i < n; ++i) {
		secretcode.push_back(rand() % m);
	}
}