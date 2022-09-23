#include "GameData.h"

GameData::GameData()
    :Shines(0), //Game Starts with 0 Shines and Coins
     Coins(0)
{
    //Nada Here...
}

int GameData::GetShines() const //Returns the amount of Shines
{
    return Shines;
}

int GameData::GetBlueCoins() const //Returns the amount of blue coins
{
    return Coins;
}

void GameData::AddShines(int shines)
{
    if (shines > 0)
    {
        Shines += shines; //Adds Shines however many were parsed
    }
}

void GameData::AddBlueCoins(int coins)
{
    if (coins > 0)
    {
        Coins += coins; //Adds coins however many were parsed
    }
}

void GameData::ConvertBlueCoinsToShines()
{
    while (Coins >= 10)
    {
        Coins -= 10;
        ++Shines;
    }
}

bool GameData::CanMarioGoToCoronaMountain() const
{
    return Shines >= 50;//Relational operators always return a bool
}
