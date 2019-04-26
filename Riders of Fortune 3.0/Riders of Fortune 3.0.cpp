// Riders of Fortune 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
	cout << "3. Quit the game" << endl;
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

					cout << "Make your choice: " << endl;

					cout << "1. Travel to another space on the board " << endl;
					cout << "2. Dismount and explore the current space" << endl;
					cout << "3. Save your game" << endl;
					cin >> i;

					if (i == 1)
					{
						Enemy Troll;

						double volume = 0.0;

						Troll.getHP = 2.0;

						Troll.setHP = 5.0;

						volume = Troll.getHP * Troll.setHP;

						cout << "Troll: " << volume << endl;

						cout << "I am the brute troll, I will not let you through" << endl;

						cin >> battle;

						if (battle > volume)

							cout << "You hit the Troll" << endl;
							
						cin >> battle;

						if (volume == 0)
						{
							Player Yarra;

							Yarra.PlayerXP = 0.0;

							Yarra.PlayerXP = volume - battle;

							cout << "You hit the Troll" << endl;

							cin >> battle;

							cout << "You have defeated the Troll" << endl;
							cout << "Your XP ranked up to" << Yarra.PlayerXP << endl;
						
							cout << "Make your choice: " << endl;
							cout << "1. Travel and explore the current space" << endl;
							cout << "2. Dismount and explore the current space" << endl;
							cout << "3. Save your game" << endl;
							cin >> i;

							
						}
						else
						{
							cout << "I hit you with my mallot and I killed you" << endl;
							cout << "GAME OVER!!!!!!!!!!";

							
						}
					}
					else
					{
						cout << "I hit you with my mallot and I killed you" << endl;
						cout << "GAME OVER!!!!!!!!!!";
					}
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

	else if (i == 2)
	{
		cout << "You found a silver sword" << endl;
		cout << "Do you want to equip it?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> i;

		if (i == 1)
		{
			vector <string> WeaponsLimit;

			WeaponsLimit.push_back("Silver sword");

			cout << "You kept " << WeaponsLimit[i] << endl;

			cout << "Make your choice: " << endl;

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

				cout << "Reaper: " << volume << endl;

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

						cout << "Make your choice: " << endl;

						cout << "1. Travel to another space on the board " << endl;
						cout << "2. Dismount and explore the current space" << endl;
						cout << "3. Save your game" << endl;
						cin >> i;

						if (i == 1)
						{
							Enemy Troll;

							double volume = 0.0;

							Troll.getHP = 2.0;

							Troll.setHP = 5.0;

							volume = Troll.getHP * Troll.setHP;

							cout << "Troll: " << volume << endl;

							cout << "I am the brute troll, I will not let you through" << endl;

							cin >> battle;

							if (battle > volume)

								cout << "You hit the Troll" << endl;

							cin >> battle;

							if (volume == 0)
							{
								Player Yarra;

								Yarra.PlayerXP = 0.0;

								Yarra.PlayerXP = volume - battle;

								cout << "You hit the Troll" << endl;

								cin >> battle;

								cout << "You have defeated the Troll" << endl;
								cout << "Your XP ranked up to" << Yarra.PlayerXP << endl;

								cout << "Make your choice: " << endl;
								cout << "1. Travel and explore the current space" << endl;
								cout << "2. Dismount and explore the current space" << endl;
								cout << "3. Save your game" << endl;
								cin >> i;

								if (i == 1)
								{
									vector<int> vec;
									int i;

									cout << "I am the Mystic Blacksmith" << endl;
									cout << "You can leave your weapons here and I'll save them for later when you need them" << endl;

									cout << "Weapons: " << WeaponsLimit[i] << endl;




									for (i = 0; i < 5; i++) {
										cout << "I will store your weapons " << endl;

										vector<int>::iterator v = vec.begin();
										while ((v != vec.end()))
										{
											cout << "You have " << *v << "weapons" << endl;
											v++;
										}

									}
								}

							}
							else
							{
								cout << "I hit you with my mallot and I killed you" << endl;
								cout << "GAME OVER!!!!!!!!!!";
							}
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
		}
	}

	else
	{
		cout << "Good bye";
	}

	return 0;
}
