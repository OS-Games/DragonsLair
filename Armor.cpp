#include "Armor.h"

Armor::Armor()
{
		Armor::mName = "Empty Armor Slot";
		Armor::mDefense = 0;
		Armor::mLoudness = 0;
		Armor::mModifier = 0;
		Armor::fHasModifier = false;
}

Armor::Armor(std::string name, int def, int loud, int mod, bool hasMod)
{
	Armor::mName = name;
	Armor::mDefense = def;
	Armor::mLoudness = loud;
	Armor::mModifier = mod;
	Armor::fHasModifier = hasMod;
}
	
		
