#pragma once
#include <string>

using namespace std;

class SetStats
{
private:
	string name;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
public:
	SetStats();
	~SetStats();

	void setName(string);
	void setAllStats(int, int, int, int, int, int);
	static void diceRoll();
	//	void setStrength(int);
	//	void setDexterity(int);
	//	void setConstitution(int);
	//	void setIntelligence(int);
	//	void setWisdom(int);
	//	void setCharisma(int);
	//	string getName()const;
	//	int getStrength()const;
	//	int getDexterity()const;
	//	int getConstitution()const;
	//	int getIntelligence()const;
	//	int getWisdom()const;
	//	int getCharisma()const;
};

