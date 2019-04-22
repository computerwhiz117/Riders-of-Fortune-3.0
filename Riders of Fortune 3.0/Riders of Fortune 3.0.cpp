// Riders of Fortune 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Player.h"
#include "Enemy.h"
#include "Reaper.h"
#include "Troll.h"
#include <string>
using namespace std;

enum Constructor {PlayerXP};

int displayPlayer(const Player &);
int displayEnemy(const Enemy &);

//int getHP(const Enemy &);
//int setHP(const Enemy &);

int main()
{

	Reaper reaper;
	Troll troll;

	int i;
	cout << "Welcome to Riders of Fortune 3.0, the open source fantasy text based adventure game." << endl;
	cout << "1. Start the game" << endl;
	cout << "2. Load previous save" << endl;
	cout << "2. Quit the game" << endl;
	cin >> i;

	if (1 == 1)
	{
		cout << "After exploring the last dungeoun you decided to explore a new dungeoun but while entering in you encountered newer foes" << endl;
		cout << "Make your choice:";
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cout << "3. Save your game" << endl;
		cin >> i;

		if (i == 1)
		{
			cout << "You encountered an enemy " << displayEnemy << endl;
			cin >> i;
		}
	}
	else
	{
		cout << "Good bye";
	}

	return 0;
}

int displayPlayer(const Player &player) {
	int getHP = 0;

	switch (player.getHP()) {
	case 0:
		getHP = 0;
		break;
	}
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
