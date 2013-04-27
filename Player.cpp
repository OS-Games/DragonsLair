#include "Player.h"

Player::Player() // Constructor for the Player class
{
	Player::mName = "Default Player Name";
	Player::hitPoints = 100;
	Player::maxHP = 100;
	Player::magicPoints = 10;
	Player::maxMP = 10;
	Player::xpos =0;
	Player::ypos =0;
	Player::mWeap = Weapon("WeaponName", 0,0,0,0,0);
	Player::mChestArmor = Armor();
	Player::mHeadArmor = Armor();
	Player::mLegArmor = Armor();
	Player::mClass = "Default Class name";
	Player::mSpecialEquip = "Default Spec Equip Name";
	Player::mTilePtr = 0; // Starts void, will be randomized
};

int Player::getHP()
{
	return Player::hitPoints;
};

void Player::loseHP(int mod)
{
	Player::hitPoints = Player::hitPoints - mod;
};

int Player::getArmour()
{
	return (Player::mHeadArmor.mDefense + Player::mChestArmor.mDefense + Player::mLegArmor.mDefense);
};

int Player::getXpos()
{
	return Player::xpos;
};

int Player:: getYpos()
{ return Player::ypos; };
