//Implement the class code which stores the code as a vector and contains
//(a) the code class declaration,
//(b)a constructor that is passed values n and m and initialize the code object,
//(c)a function that initializes the code randomly,
//(d)a function checkCorrect which is passed a guess as a parameter, i.e.another code
//object, and which returns the number of correct digits in the correct location,
//(e)a function checkIncorrect which is passed a guess as a parameter(i.e.another code
//	object and returns the number of correct digits in the incorrect location.No digit in
//	the guess or the code should be counted more than once.
//	2. Implement a function main() which initializes a secrete code and prints out the result of calling
//	checkCorrect and checkIncorrect for three sample guess codes((5, 0, 3, 2, 6), (2, 1, 2, 2, 2),
//		(1, 3, 3, 4, 5)).Please print the secrete code as well.
//	2
//
// 
//


#ifndef Code_h
#define Code_h
#include <vector>
using namespace std; 

class Code{

	public:

		Code(int n, int m); //constructor with values n and m 
		void Start(); //welcome screen type
		void Play(); //start the game and ask user 
		void Randomized();
		vector <int> guessV();
		int checkCorrect(vector<int>);
		int checkIncorrect(vector<int>);




	private: 
		int guesses;
		vector<int> secretcode;
		int n;
		int m;

};


#endif Code_h