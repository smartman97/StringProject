/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: clar5254
 */

#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController :: StringController()
{

}

void StringController :: start()
{
	myWords = "Colm";
	words = "Colm";
	cout << words << endl;
	cout << "My name is " << words.length() << " letters long." << endl;
	cout << "Enter your name." << endl;
	words = "";
	cin >> words;

	if(words.empty())
	{
		cout << "You didn't type anything silly!" << endl;
	}
	else
	{
		cout << "Your name is " << words.length() << " letters long." << endl;
		cout << "The first letter is " << words[0] << endl;
		count = words.length() - 1;
		cout << "The last letter is " << words.at(count) << endl;
	}

	if(words.compare(myWords) == 0)
	{
		cout << "We have the same Name!" << endl;
	}

	words = "You are smart! NOT!";
	cout << words.substr(0,14) << endl;
	cout << words.substr(15) << endl;

}




