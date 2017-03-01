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
		int menu;
		cout	<< "Please choose a category of weapons, or to enter your own weapon: \n"
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
		int menu;
		cout	<< "Please choose a category of armor, or to enter your own armor: \n"
				<< "1) Light Armor\n"
				<< "2) Medium Armor\n"
				<< "3) Heavy Armor\n"
				<< "4) Enter your own\n";
		cin >> menu;

		string newArmor;
		switch (menu)
		{
		case 1:
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
			cout << "What is the name of your armor? \n";
			cin.ignore();
			getline(cin, newArmor);
			addArmor(newArmor);
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
	string newItem;
	int menu;
	bool flag = true;

	while (flag)
	{
		cout << "Please choose an item, or to enter your own item: \n"
			<< "1) Mystic Tools\n"
			<< "2) Anvil\n"
			<< "3) Rope Kit\n"
			<< "4) Harp\n"
			<< "5) Pocket Knife\n"
			<< "6) Enter your own\n";
		cin >> menu;

		switch (menu)
		{
		case 1:
			addItem("Mystic Tools");
			flag = false;
			break;
		case 2:
			addItem("Anvil");
			flag = false;
			break;
		case 3:
			addItem("Rope Kit");
			flag = false;
			break;
		case 4:
			addItem("Harp");
			flag = false;
			break;
		case 5:
			addItem("Pocket Knife");
			flag = false;
			break;
		case 6:
			cout << "What is the name of your item? \n";
			cin.ignore();
			getline(cin, newItem);
			addItem(newItem);
			flag = false;
			break;
		default:
			cout << "Invalid input\n";
			flag = true;
		}
	}
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
	cout << "Weapons: \n";
	for (int i = 0; i < weapons.size(); i++)
	{
		cout << weapons[i] << endl;
	}
}
// Displays a list of armors
void Equipment::displayArmor() {
	cout << "Armor: \n";
	for (int i = 0; i < armors.size(); i++)
	{
		cout << armors[i] << endl;
	}
}
// Displays a list of items
void Equipment::displayItems() {
	cout << "Inventory: \n";
	for (int i = 0; i < items.size(); i++)
	{
		cout << items[i] << endl;
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
