// DungeonsAndDragons.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Race.h"
#include "Menu.h"
#include "Personality.h"
#include "Equipment.h"
#include "FeaturesAndTraits.h"
#include "SetStats.h"
#include "CharacterInfo.h"
#include <iomanip>
#include <Windows.h>
#include "CharacterClass.h"

using namespace std;

   /////////////////////////////
  //   Author: Tylor Horn    //
 //		tehorn@dmacc.edu    //
/////////////////////////////

// Function prototypes
void createCharacter();
void updateStats();
void displayCharacter();
void createRace();
void pickClass();

// object instantiations / Global variables
Personality personality;
Equipment equip;
FeaturesAndTraits feats;
CharacterInfo characterInfo;
SetStats stats;
setRace race;
characterClass character;

// Stat variables
int strength;
int dexterity;
int constitution;
int intelligence;
int wisdom;
int charisma;
int racePick;
int classPick;

int *charStats = new int[6];


int main()
{
	system("mode 650");

	Menu::displayStart();
	cin.ignore();


	bool flag = false;
	while (flag != true)
	{
		int option;
		Menu::displayMenu();
	
		cin >> option;

		switch (option) {
		case 1:
			createCharacter();
			break;
		case 2:
			updateStats();
			break;
		case 3:
			displayCharacter();
			break;
		case 4:
			flag = true;
			break;
		default: 
			cout << "Please choose a valid menu option." << endl;
			break;
		}
	}
	



    return 0;
}

// Sets class and skills
void pickClass()
{
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||        Character Class      ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	cout << "Please select your class:" << endl;
	cout << " 1)Barbarian" << endl; 
	cout << " 2)Bard" << endl;
	cout << " 3)Cleric" << endl;
	cout << " 4)Druid" << endl;
	cout << " 5)Fighter" << endl;
	cout << " 6)Monk" << endl;
	cout << " 7)Palidan" << endl;
	cout << " 8)Ranger" << endl;
	cout << " 9)Rogue" << endl;
	cout << "10)Sorcerer" << endl;
	cout << "11)Warlock: " << endl;
	cin >> classPick;
	while (classPick < 0 || classPick>11) {
		cout << "Error: " << endl;
		cout << "Please select your class:" << endl;
		cout << " 1)Barbarian" << endl;
		cout << " 2)Bard" << endl;
		cout << " 3)Cleric" << endl;
		cout << " 4)Druid" << endl;
		cout << " 5)Fighter" << endl;
		cout << " 6)Monk" << endl;
		cout << " 7)Palidan" << endl;
		cout << " 8)Ranger" << endl;
		cout << " 9)Rogue" << endl;
		cout << "10)Sorcerer" << endl;
		cout << "11)Warlock: " << endl;		
		cin >> classPick;
	}
	if (classPick == 1) {
		character.barbarian(constitution);
	}
	else if (classPick == 2) {
		character.bard(constitution);
	}
	else if (classPick == 3) {
		character.cleric(constitution);
	}
	else if (classPick == 4) {
		character.druid(constitution);
	}
	else if (classPick == 5) {
		character.fighter(constitution);
	}
	else if (classPick == 6) {
		character.monk(constitution);
	}
	else if (classPick == 7) {
		character.paladin(constitution);
	}
	else if (classPick == 8) {
		character.ranger(constitution);
	}
	else if (classPick == 9) {
		character.rogue(constitution);
	}
	else if (classPick == 10) {
		character.sorcerer(constitution);
	}
	else {
		character.warlock(constitution);
	}
}

// Sets race and updates stats accordingly
void createRace()
{
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||        Character Race       ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	cout << "Please select your race: " << endl;
	cout << "1)Human" << endl;
	cout << "2)Dwarf" << endl;
	cout << "3)Elf" << endl;
	cout << "4)Halfling" << endl;
	cout << "5)Dragonborn" << endl;
	cout << "6)Gnome" << endl;
	cout << "7)Half-elf" << endl;
	cout << "8)Half-orc" << endl;
	cout << "9)Tiefling" << endl;
	cin >> racePick;
	while (racePick < 0 || racePick>9) {
		cout << "Error: " << endl;
		cout << endl;
		cout << "Please select your race: " << endl;
		cout << "1)Human" << endl;
		cout << "2)Dwarf" << endl;
		cout << "3)Elf" << endl;
		cout << "4)Halfling" << endl;
		cout << "5)Dragonborn" << endl;
		cout << "6)Gnome" << endl;
		cout << "7)Half-elf" << endl;
		cout << "8)Half-orc" << endl;
		cout << "9)Tiefling" << endl;		cin >> racePick;
	}
	if (racePick == 1) {
		race.human(charStats);
	}
	else if (racePick == 2) {
		race.dwarf(constitution);
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||          Sub - Race         ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;

		cout << "Please pick a subrace" << endl;
		cout << "1)Hill Dwarf" << endl;
		cout << "2)Mountain Dwarf" << endl;
		cin >> racePick;
		while (racePick < 0 || racePick>2) {
			cout << "Error: " << endl;
			cout << "Please pick a subrace" << endl;
			cout << "1)Hill Dwarf" << endl;
			cout << "2)Mountain Dwarf" << endl;
			cin >> racePick;
		}
		if (racePick == 1) {
			race.hillDwarf(wisdom);
		}
		else {
			race.mountainDwarf(strength);
		}
	}
	else if (racePick == 3) {
		race.elf(dexterity);
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||          Sub - Race         ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;
		cout << "Please pick a subrace" << endl;
		cout << "1)High Elf" << endl;
		cout << "2)Wood Elf" << endl;
		cout << "3)Dark Elf" << endl;
		cin >> racePick;
		while (racePick != 1 && racePick != 2 && racePick != 3) {
			cout << "Error: " << endl;
			cout << "Please pick a subrace" << endl;
			cout << "1)High Elf" << endl;
			cout << "2)Wood Elf" << endl;
			cout << "3)Dark Elf" << endl;
			cin >> racePick;
		}
		if (racePick == 1) {
			race.highElf(intelligence);
		}
		else if (racePick == 2) {
			race.woodElf(wisdom);
		}
		else {
			race.darkElf(charisma);
		}
	}
	else if (racePick == 4) {
		race.halfling(dexterity);
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||          Sub - Race         ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;
		cout << "Please pick a subrace" << endl;
		cout << "1)Lightfoot Halfling" << endl;
		cout << "2)Stout Halfling" << endl;
		cin >> racePick;
		while (racePick != 1 && racePick != 2) {
			cout << "Error: " << endl;
			cout << "Please pick a subrace" << endl;
			cout << "1)Lightfoot Halfling" << endl;
			cout << "2)Stout Halfling" << endl;
			cin >> racePick;
		}
		if (racePick == 1) {
			race.lightfootHalfling(charisma);
		}
		else {
			race.stoutHalfling(constitution);
		}
	}
	else if (racePick == 5) {
		race.dragonborn(strength, charisma);
	}
	else if (racePick == 6) {
		race.gnome(intelligence);
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||          Sub - Race         ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;
		cout << "Please pick a subrace: ";
		cout << "1)Forest Gnome" << endl;
		cout << "2)Rock Gnome" << endl;
		cin >> racePick;
		while (racePick != 1 && racePick != 2) {
			cout << "Error: " << endl;
			cout << "Please pick a subrace: ";
			cout << "1)Forest Gnome" << endl;
			cout << "2)Rock Gnome" << endl;
			cin >> racePick;
		}
		if (racePick == 1) {
			race.forestGnome(dexterity);
		}
		else {
			race.rockGnome(constitution);
		}
	}
	else if (racePick == 7) {
		race.halfElf(charisma);
	}
	else if (racePick == 8) {
		race.halfOrc(strength, constitution);
	}
	else {
		race.tiefling(charisma, intelligence);
	}

	stats.setStrength(strength);
	stats.setDexterity(dexterity);
	stats.setConstitution(constitution);
	stats.setIntelligence(intelligence);
	stats.setWisdom(wisdom);
	stats.setCharisma(charisma);
	
}

void createCharacter() {
	// Character information
	characterInfo.setPlayerName();
	characterInfo.setCharacterName();
	characterInfo.setBackground();
	characterInfo.setLevel();
	characterInfo.setExpPoints();

	//Stats
	stats.diceRoll(charStats);
	stats.setAllStats(charStats);
	strength = stats.getStrength();
	dexterity = stats.getDexterity();
	constitution = stats.getConstitution();
	intelligence = stats.getIntelligence();
	wisdom = stats.getWisdom();
	charisma = stats.getCharisma();

	//Race 
	createRace();
	characterInfo.setAlignment();

	//Class
	pickClass();

	//Personality
	personality.setIdeals();
	personality.setBonds();
	personality.setFlairs();

	//Equipment
	equip.setWeapon();
	equip.setArmor();
	equip.setItem();
	
	//Features
	feats.setFeatures();

	system("pause");

}

void updateStats()
{
	int choice;
	Menu::displayStatsMenu();
	cin >> choice;

	switch (choice)
	{
	case 1:
		characterInfo.setExpPoints();
		break;
	case 2:
		characterInfo.setLevel();
		break;
	default: cout << "Choose a valid menu option!";
	}
}

void displayCharacter()
{
	Menu::displayCharacterInfo();
	characterInfo.characterInfoToString();
	character.printCharacterClass();
	equip.toString();
	character.printProf();
	character.printSkills(strength, dexterity, constitution, intelligence, wisdom, charisma);


	system("pause");
}
