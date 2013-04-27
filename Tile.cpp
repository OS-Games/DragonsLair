#include "Tile.h"

void Tile::randomizeTile() 
													 // This function will run on each tile to 
{													 // randomize it at game start.
	int randNum = rand() % 101;						  
	if(randNum >= 50)					 
	{
			Tile::mLogo = '0';
			Tile::mType = "Floor Tile";
	}
	else if(randNum > 29 && randNum <50) 
	{
		Tile::mLogo = 'A';
		Tile::mType = "Loot Pile";
	}
	else if(randNum > 19 && randNum<30)
	{
		Tile::mLogo = '$';
		Tile::mType = "Gold Pile";
	}
	else if(randNum > 9 && randNum < 20)
	{
		Tile::mLogo = '8';
		Tile::mType = "Rock Pile";
	}
	else if(randNum > 4 && randNum <10)
	{
		Tile::mLogo = 'Y';
		Tile::mType = "Fallen Adventurer";
	}
	else if(randNum > 0 && randNum <5)
	{
		Tile::mLogo = '%';
		Tile::mType = "Dragon Egg Pile";
	}
	else 
	{
		Tile::mLogo = 'o';
		Tile::mType = "The One Ring";
	}
}
