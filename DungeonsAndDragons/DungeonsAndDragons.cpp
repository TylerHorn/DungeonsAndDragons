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
using namespace std;


void createCharacter();
void updateStats();
void displayCharacter();

static Personality prsnlty;
Equipment eqpt;
FeaturesAndTraits ftrs;
static CharacterInfo character;

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

void createCharacter() {
	character.setPlayerName();
	character.setCharacterName();
	character.setCharacterClass();
	character.setAlignment();
	character.setBackground();
	character.setLevel();
	character.setExpPoints();


	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Personalitly Traits     ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	prsnlty.setBonds();

	prsnlty.setFlairs();
	cout <<  endl;

	eqpt.setWeapon();

	eqpt.setArmor();

	eqpt.setItem();
	cout << endl;

	ftrs.setFeatures();


	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||             Stats           ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	SetStats::diceRoll();

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
		character.setExpPoints();
		break;
	case 2:
		character.setLevel();
		break;
	case 3:
		
		break;
	}
}

void displayCharacter()
{
	Menu::displayCharacterInfo();
	character.characterInfoToString();


	system("pause");
}
