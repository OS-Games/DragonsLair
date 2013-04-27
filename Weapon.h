#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string name, int dmg, int acc, int mod, bool twoHand, bool hasMod);

	std::string mName;
	int mBaseDamage;
	int mWeapAccuracy;
	int mModifier;

	// Flags for various checks

	bool fIsTwoHanded;
	bool fHasModifier;

};

#endif