// code breaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;
int score;
string swap(string first, int y) {
	random_shuffle(first.begin(), first.end());



	return first;
}
int end() {
	system("CLS");
	cout << "You got ";
	cout << score;
	cout << " out of 3\n";
	return 0;
}
int level3() {
	bool x = true;
	int i = 0;
	string words[10] = { "Because", "Cat", "Programming", "Can","Tan","Hand","Understand","Man","Bam","Pen" };
	string help[10] = { "I like cats .....", "A nice animal", "Another word for coding", "I ... do it","I went to the beach and got a ...", "I like to type with my ....", "I completely ...", "He is a ...", "Guns go ...", "I can write with my ..." };
	srand(time(NULL));
	int first = rand() % 9 + 1;
	string word1 = swap(words[first], first);
	string word = words[first];
	while (x == true)
	{
		string input;
		cout << word1 + "\n";
		cin >> input;

		i = i + 1;
		if (i == 3) {
			cout << "You failed moving to level 3 \n";
			break;
			system("CLS");
			end();
		}
		else if (words[first] == input) {
			cout << "Pass\n";
			score = score + 1;
			system("CLS");
			end();
			break;
			x = false;
		}
		else if (input == "h") {
			cout << help[first];
			cout << "\n";
		}

		
	}
	return 0;
}
int level2() {
	bool x = true;
	int i = 0;
	string words[10] = { "Because", "Cat", "Programming", "Can","Tan","Hand","Understand","Man","Bam","Pen" };
	string help[10] = { "I like cats .....", "A nice animal", "Another word for coding", "I ... do it","I went to the beach and got a ...", "I like to type with my ....", "I completely ...", "He is a ...", "Guns go ...", "I can write with my ..." };
	srand(time(NULL));
	int first = rand() % 9 + 1;
	string word1 = swap(words[first], first);
	string word = words[first];
	while (x == true)
	{
		string input;
		cout << word1 + "\n";
		cin >> input;

		i = i + 1;
		if (i == 3) {
			cout << "You failed moving to level 3 \n";
			break;
			level3();
		}
		else if (words[first] == input) {
			cout << "Pass\n";
			score = score + 1;
			x = false;
			level3();
		}
		else if (input == "h") {
			cout << help[first];
			cout << "\n";
		}


		
	}
	return 0;
}


int level1() {
	bool x = true;
	int i = 0;
	string words[10] = { "Because", "Cat", "Programming", "Can","Tan","Hand","Understand","Man","Bam","Pen" };
	string help[10] = { "I like cats .....", "A nice animal", "Another word for coding", "I ... do it","I went to the beach and got a ...", "I like to type with my ....", "I completely ...", "He is a ...", "Guns go ...", "I can write with my ..." };
	srand(time(NULL));
	int first = rand() % 9 + 1;
	string word1 = swap(words[first], first);
	string word = words[first];
	while (x == true)
	{
		string input;
		cout << word1 + "\n";
		cin >> input;

		i = i + 1;
		if (i == 3) {
			cout << "You failed moving to level 2 \n";
			level2();
		}
		else if (words[first] == input) {
			cout << "Pass\n";
			x = false;
			score = score + 1;
			level2();
		}
		else if (input == "h") {
			cout << help[first];
			cout << "\n";
		}

		
		
	}
	return 0;
}


void mainmenu() {
	score = 0;
	bool p = true;
	string option;
	while (p == true) {
		cout << "Welcome to Code Breaker Training \n";
		cout << "Once you begin you will have 3 tries per level. You can Press H to get a hint.\n";
		cout << "Press any key to start or x to quit \n";
		cin >> option;
		if (option == "x") {
			p = false;
			

		}
		else {
			p = false;
			level1();
		}
	}

}

int restart() {
	cout << "Do you want to restart\n";
	cout << "Press Y or any other key to return to the main menu.\n";
	string input;
	cin >> input;
	if (input == "y" || "Y") {
		mainmenu();

	}
	else {
		return 0;
		
	}
}
int main()
{
	mainmenu();
	restart();
	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
