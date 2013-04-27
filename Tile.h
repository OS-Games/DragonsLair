// Header file for the Tile class

#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <stdlib.h>
#include <string>

class Tile
{
public:
	// Methods
	void randomizeTile();

	// Data members

	std::string mType;
	char mLogo;
};
#endif