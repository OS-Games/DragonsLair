// Header file for the player class

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "Tile.h"
#include "Weapon.h"
#include "Armor.h"

class Player
{
public:

	//Methods
	
	Player();
	int getXpos();
	int getYpos();
	int getHP();
	void loseHP(int mod);
	int getMP();
	int getArmour();
	std::string getName();
	//Data members
	std::string mName;
	int hitPoints;
	int maxHP;
	int magicPoints;
	int maxMP;
	int xpos;
	int ypos;
	Weapon mWeap; // To be replaced with weapons class
	Armor mChestArmor;
	Armor mHeadArmor;
	Armor mLegArmor;// "..." Armor class
	std::string mClass; // Char class
	std::string mSpecialEquip; // Uh, deal with this later.

	Tile* mTilePtr; //Ptr to tile in map. Where the player is. (duh)
};
#endif