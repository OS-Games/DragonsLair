#include "Weapon.h"

Weapon::Weapon()
{
	Weapon::mName = "WeaponName";
	Weapon::mBaseDamage = 0;
	Weapon::mWeapAccuracy = 0;
	Weapon::mModifier = 0;
	Weapon::fIsTwoHanded = false;
	Weapon::fHasModifier = false;
}

Weapon::Weapon(std::string name, int dmg, int acc, int mod, bool twoHand, bool hasMod)
{
	Weapon::mName = name;
	Weapon::mBaseDamage = dmg;
	Weapon::mWeapAccuracy = acc;
	Weapon::mModifier = mod;
	Weapon::fIsTwoHanded = twoHand;
	Weapon::fHasModifier = hasMod;
}