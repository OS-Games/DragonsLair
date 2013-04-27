#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class Armor
{
public:
	Armor();
	Armor( std::string name, int def, int loud, int mod, bool hasMod);
	// data members
	
	std::string mName;
	int mDefense;
	int mLoudness;
	int mModifier;

	//flags

	bool fHasModifier;
};

#endif