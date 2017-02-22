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
using namespace std;

void createCharacter();

Personality prsnlty;
Equipment eqpt;
FeaturesAndTraits ftrs;

int main()
{
	


	Menu::displayStart();
	cin.ignore();

	int option;
	Menu::displayMenu();
	cin >> option;

	switch (option) {
	case 1:
		createCharacter();
		break;
	case 2:

		break;
	case 3:

		break;
	}

	



    return 0;
}

void createCharacter() {
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Personalitly Traits     ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	prsnlty.setBonds();
	cout << "------------------------------------" << endl;
	prsnlty.setFlairs();
	cout <<  endl;

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||           Equipment         ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	eqpt.setWeapon();
	cout << "------------------------------------" << endl;
	eqpt.setArmor();
	cout << "------------------------------------" << endl;
	eqpt.setItem();
	cout << endl;

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||           Features          ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	ftrs.setFeatures();
	cout << "------------------------------------" << endl;

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||             Stats           ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;

	SetStats::diceRoll();

	system("pause");


}