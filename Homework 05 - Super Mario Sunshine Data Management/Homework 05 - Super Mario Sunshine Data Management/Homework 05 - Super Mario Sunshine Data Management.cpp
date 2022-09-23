// Homework 05 - Super Mario Sunshine Data Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chris Miller Best Worst Programmer

#include <ctime>
#include <iostream>
#include "GameData.h"

void PrintHeader(const GameData& data)
{
	std::cout << "------------------------" << std::endl;
	std::cout << "  Super Mario Sunshine  " << std::endl;
	std::cout << "------------------------" << std::endl;

	if (data.CanMarioGoToCoronaMountain() == true)
	{
		std::cout << "MARIO CAN GO GET BOWSER!" << std::endl;
	}
	else
	{
		std::cout << "MARIO NEEDS  50  SHINES!" << std::endl;
	}

	std::cout << "------------------------" << std::endl;
	std::cout << "SHINES:     " << data.GetShines() << std::endl;
	std::cout << "BLUE COINS: " << data.GetBlueCoins() << std::endl;
}

int PrintMenuAndGetMenuChoice()
{
	std::cout << std::endl;
	std::cout << "1) Add SHINES" << std::endl;
	std::cout << "2) Add BLUE COINS" << std::endl;
	std::cout << "3) Convert BLUE COINS to SHINES (10 => 1)" << std::endl;
	std::cout << "4) Exit PROGRAM" << std::endl;

	std::cout << "?? ";
	int choice;
	std::cin >> choice;

	while ((choice < 1) || (choice > 4))
	{
		std::cout << "?? ";
		std::cin >> choice;
	}

	return choice;
}

void AddShines(GameData& data)
{
	std::cout << "How many SHINES to add? ";
	int shines;
	std::cin >> shines;
	data.AddShines(shines);
}

void AddBlueCoins(GameData& data)
{
	std::cout << "How many BLUE COINS to add? ";
	int coins;
	std::cin >> coins;
	data.AddBlueCoins(coins);
}

void ConvertBlueCoinsToShines(GameData& data)
{
	data.ConvertBlueCoinsToShines();
}

int main()
{
	GameData game;

	int choice;
	do
	{
		PrintHeader(game);

		choice = PrintMenuAndGetMenuChoice();
		if (choice == 1)
		{
			AddShines(game);
		}
		else if (choice == 2)
		{
			AddBlueCoins(game);
		}
		else if (choice == 3)
		{
			ConvertBlueCoinsToShines(game);
		}
		std::cout << std::endl;
	} while (choice != 4);

	std::cout << "Thank you for playing Super Mario Sunshine!" << std::endl;
	std::cout << std::endl;

	// Clean up and quit
	system("PAUSE");
	return 0;
}
