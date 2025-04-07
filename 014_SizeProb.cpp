// ExampleCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <iostream>
//#define SIZE 3;

using namespace std;
 
const int size = 3;
 
void inputscore(int *scoreX)
{
	cout << "Entered size:" << size << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> *(scoreX+i);
	}
}
 
void printscore(const int scoreY[])
{
	cout << "The Scores are :";
	for (int i = 0; i < size; i++)
	{
		cout << *(scoreY+i);
	}
}
int main()
{
 
	int *score = new int[3];
	inputscore(score);
 
	printscore(score);
	return 0;
}
 