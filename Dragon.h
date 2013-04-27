// Header file for the dragon class

#ifndef DRAGON_H
#define DRAGON_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "Player.h"
#include "Tile.h"

class Dragon
{
public:
	// Methods
	
	Dragon();
	bool wakeCheck();
	bool lookForPlayer(Player* thePlayer);
	void clawPlayer(Player* thePlayer);
	Tile move();
	std::string getName();
	int getHP();
	int getXpos();
	int getYpos();

	void setXpos(int value);
	void setYpos(int value);
	
	// for 'powder' items used by player
	void applyBlindness();
	void applyParalysis();
	void applyWeakness();
	void applySleepiness();

	// Flags
	bool isAsleep;
	bool isParalyzed;
	bool isBlinded;
	bool isWeakened;

private:
	std::string mName;
	int mMaxHP;
	int mHP;
	int mSleepTime;
	int mAcc;
	int mStr;
	
	int xpos;
	int ypos;

};
#endif