#pragma once
#include <string>
#include <vector>

using namespace std;

class characterClass
{
private:
	string charClass;
	int level;
	int hp;
	int proficiencyBonus;
	string hpDice;
	string classAbilities;
	string savingThrows;
	string tools;
	vector<string> startingEquipment;
	vector<string> wepProf;
	vector<string> armorProf;
	vector<string> skills;
	vector<string> profSkills;
public:
	characterClass();
	void barbarian(int);
	void bard(int);
	void cleric(int);
	void druid(int);
	void fighter(int);
	void monk(int);
	void paladin(int);
	void ranger(int);
	void rogue(int);
	void sorcerer(int);
	void warlock(int);
	void printCharacterClass();
	void printProf();
	void printSkills(int&, int&, int&, int&, int&, int&);
	int getHp();
	int getLevel();


	~characterClass();
};

