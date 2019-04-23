// Riders of Fortune 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Enemy {
public:
	double getHP;
	double setHP;
};

class Player {
public:

	double PlayerXP;
};

int main()
{

	int i;
	int battle;
	cout << "Welcome to Riders of Fortune 3.0, the open source fantasy text based adventure game." << endl;
	cout << "1. Start the game" << endl;
	cout << "2. Load previous save" << endl;
	cout << "2. Quit the game" << endl;
	cin >> i;

	if (1 == 1)
	{
		cout << "After exploring the last dungeoun you decided to explore a new dungeoun but while entering in you encountered newer foes" << endl;
		cout << "Make your choice:" << endl;
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cout << "3. Save your game" << endl;
		cin >> i;

		if (i == 1)
		{
			Enemy Reaper;
			double volume = 0.0;

			Reaper.getHP = 2.0;

			Reaper.setHP = 5.0;


			volume = Reaper.getHP * Reaper.setHP;

			cout << "Reaper: " << volume <<  endl;

			cout << "I am the Raging Reaper, I seek for new souls which yours will be mine." << endl;

			cin >> battle;

			if (battle > volume)
			{


				Player Yarra;

				Yarra.PlayerXP = 0.0;

				Yarra.PlayerXP = volume - battle;

				cout << "You hit the Reaper" << endl;

				cin >> battle;

				if (volume == 0)
				{
					cout << "You have defeated the Reaper" << endl;
					cout << "Your XP ranked up to " << Yarra.PlayerXP << endl;
				}
				else
				{
					cout << "I slashed you in half and now your soul is mine" << endl;
					cout << "GAME OVER!!!!!!!!!!!" << endl;
				}
			}
			else
			{
				cout << "I slashed you in half and now your soul is mine" << endl;
				cout << "GAME OVER!!!!!!!!!!!" << endl;
			}

		}
	}
	else
	{
		cout << "Good bye";
	}

	return 0;
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
