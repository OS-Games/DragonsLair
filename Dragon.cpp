#include "Dragon.h"

Dragon::Dragon()
{
	Dragon::mName = "Name Placeholder";
	Dragon::mHP = 500;
	Dragon::mMaxHP = 500;
	Dragon::mSleepTime = 5;
	Dragon::mAcc = 8;
	Dragon::mStr = 10;
	Dragon::xpos = 0;
	Dragon::ypos = 0;
}
int Dragon::getXpos()
{
	return Dragon::xpos;
}
int Dragon::getYpos()
{
	return Dragon::ypos;
}

void Dragon::setXpos(int value)
{
	Dragon::xpos = value;
}

void Dragon::setYpos(int value)
{
	Dragon::ypos = value;
}

void Dragon::clawPlayer(Player* thePlayer)
{
	std::cout << "The dragon claws at you, ";
	if((rand() % 21) <= Dragon::mAcc*2)
	{
	int damage = (Dragon::mStr + (2+rand()%8)) - thePlayer->getArmour();
	std::cout << "and does " << damage << " damage! \n";
	thePlayer->loseHP(damage);
	}
	else std::cout<< "but she misses! \n";
}

;