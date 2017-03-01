#pragma once
#include <string>

using namespace std;

class CharacterInfo
{
public:
	CharacterInfo();

private:


public:
	string characterName;
	string characterClass;
	int level;
	string background;
	string race;
	string alignment;
	int expPoints;
	string playerName;

	void setCharacterName();
	string getCharacterName();
	string getCharacterClass();
	void setLevel();
	int getLevel();
	void setBackground();
	string getBackground();
	void setAlignment();
	string getAlignment();
	void setExpPoints();
	int getExpPoints();
	void setPlayerName();
	string getPlayerName();
	void characterInfoToString();


	~CharacterInfo();
};

