#pragma once

class GameData
{
public:
	GameData();

	int GetShines() const;
	int GetBlueCoins() const;

	void AddShines(int shines);
	void AddBlueCoins(int coins);

	void ConvertBlueCoinsToShines();

	bool CanMarioGoToCoronaMountain() const;

private:
	int Shines;
	int Coins;
};