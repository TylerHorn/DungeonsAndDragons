#include "stdafx.h"
#include "Equipment.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


Equipment::Equipment()
{
}

// Only returns the first in the vector
string Equipment::getWeapon()const {
	return weapons.front();
}
string Equipment::getArmor()const {
	return armors.front();
}
string Equipment::getItem()const {
	return items.front();
}

// Displays a list of weapons and prompts the user to choose by number
void Equipment::setWeapon() {
	int weaponNo;
	bool flag = true;
	while (flag)
	{
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||         Weapons Menu        ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;
		int menu;
		cout << "Please choose a category of weapons, or to enter your own weapon: \n"
			<< "1) Simple Melee\n"
			<< "2) Simple Ranged\n"
			<< "3) Martial Melee\n"
			<< "4) Martial Ranged\n"
			<< "5) Enter your own\n";
		cin >> menu;

		string newWeapon;
		switch (menu)
		{
		case 1:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||          Simple Melee       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << i << ": " << simpleMelee[i] << endl;
			}
			cin >> weaponNo;
			addWeapon(simpleMelee[weaponNo]);
			flag = false;
			break;
		case 2:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||         Simple Ranged       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 4; i++)
			{
				cout << i << ": " << simpleRanged[i] << endl;
			}
			cin >> weaponNo;
			addWeapon(simpleRanged[weaponNo]);
			flag = false;
			break;
		case 3:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||         Martial Melee       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 18; i++)
			{
				cout << i << ": " << martialMelee[i] << endl;
			}
			cin >> weaponNo;
			addWeapon(martialMelee[weaponNo]);
			flag = false;
			break;
		case 4:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||        Martial Ranged       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 5; i++)
			{
				cout << i << ": " << martialRanged[i] << endl;
			}
			cin >> weaponNo;
			addWeapon(martialRanged[weaponNo]);
			flag = false;
			break;
		case 5:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||       Create Your Own       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "What is the name of your weapon? \n";
			cin.ignore();
			getline(cin, newWeapon);
			addWeapon(newWeapon);
			flag = false;
			break;
		default:
			cout << "Invalid input\n";
			flag = true;
		}
	}
}
// Displays a list of armors and prompts the user to choose by number
void Equipment::setArmor() {
	int armorNo;
	bool flag = true;
	while (flag)
	{
		system("cls");

		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << "||             Armor           ||" << endl;
		cout << "|||||||||||||||||||||||||||||||||" << endl;
		cout << endl;
		int menu;
		cout << "Please choose a category of armor, or to enter your own armor: \n"
			<< "1) Light Armor\n"
			<< "2) Medium Armor\n"
			<< "3) Heavy Armor\n"
			<< "4) Enter your own\n";
		cin >> menu;

		string newArmor;
		switch (menu)
		{
		case 1:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||         Light Armor         ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a armor from the list: \n";
			for (int i = 0; i < 3; i++)
			{
				cout << i << ": " << lightArmor[i] << endl;
			}
			cin >> armorNo;
			addArmor(lightArmor[armorNo]);
			flag = false;
			break;
		case 2:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||        Medium Armor         ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 5; i++)
			{
				cout << i << ": " << mediumArmor[i] << endl;
			}
			cin >> armorNo;
			addArmor(mediumArmor[armorNo]);
			flag = false;
			break;
		case 3:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||         Heavy Armor         ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "Please choose the number of a weapon from the list: \n";
			for (int i = 0; i < 4; i++)
			{
				cout << i << ": " << heavyArmor[i] << endl;
			}
			cin >> armorNo;
			addArmor(heavyArmor[armorNo]);
			flag = false;
			break;
		case 4:
			system("cls");

			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << "||       Create Your Own       ||" << endl;
			cout << "|||||||||||||||||||||||||||||||||" << endl;
			cout << endl;
			cout << "What is the name of your armor? \n";
			cin.ignore();
			getline(cin, newArmor);
			addWeapon(newArmor);
			flag = false;
			break;
		default:
			cout << "Invalid input\n";
			flag = true;
		}
	}
}
// Prompts the user to add an item
void Equipment::setItem() {
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||             Items           ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;
	string newItem;
	cout << "What is the name of your item? \n";
	cin.ignore();
	getline(cin, newItem);
	addItem(newItem);
}

// Adds a weapon
void Equipment::addWeapon(string wp) {
	weapons.push_back(wp);
}
// Adds an armor
void Equipment::addArmor(string ar) {
	armors.push_back(ar);
}
// Adds an item
void Equipment::addItem(string it) {
	items.push_back(it);
}

// Displays a list of weapons
void Equipment::displayWeapon() {
	cout << "                                                      Weapons: " << endl;
	for (int i = 0; i < weapons.size(); i++)
	{
		cout << "								" << weapons[i] << " " << endl;
	}
}
// Displays a list of armors
void Equipment::displayArmor() {
	cout << "                                                      Armor: " << endl;
	for (int i = 0; i < armors.size(); i++)
	{
		cout << "							    " << armors[i] << endl;
	}
}
// Displays a list of items
void Equipment::displayItems() {
	cout << "                                                      Inventory: " << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << "								" << items[i] << " " << endl;
	}
}

// Displays all equipment
void Equipment::toString() {
	displayWeapon();
	displayArmor();
	displayItems();
}

Equipment::~Equipment()
{
}