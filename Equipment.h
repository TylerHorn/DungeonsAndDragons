#pragma once
#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include<string>
#include<iostream>
using namespace std;
//so I think the best thing to do here is create an array with all the weapons
//then have a method that displays all of the options for the weapons.
//then have another method that takes that input, and sets it.
class Equipment {
private:

	vector<string> weapons;
	vector<string> armors;
	vector<string> items;
	string weaponList[4] = { "Knife", "Broken Sword", "Boomerang", "Throwing Star" };
	string armorList[3] = { "Leather", "Chainmail", "Banded Mail" };
public:
	void setWeapon();
	void setArmor();
	void setItem();
	string getWeapon()const;
	string getArmor()const;
	string getItem()const;
	void addWeapon(string);
	void addArmor(string);
	void addItem(string);
	void displayWeapon();
	void displayArmor();
	void displayItems();
	void toString();
};

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
	cout << "Please choose the corresponding number for you weapon, or enter 99 to manually add a weapon: \n";
	cout << "List of all weapons: \n";
	for (int i = 0; i < 4; i++)
	{
		cout << i << ": " << weaponList[i] << endl;
	}
	cin >> weaponNo;
	if (weaponNo == 99)
	{
		string newWeapon;
		cout << "What is the name of your weapon? \n";
		cin >> newWeapon;
		addWeapon(newWeapon);
	}
	else
	{
		addWeapon(weaponList[weaponNo]);
	}

}
// Displays a list of armors and prompts the user to choose by number
void Equipment::setArmor() {
	int armorNo;
	cout << "Please choose the corresponding number for you armor, or enter 99 to manually add an armor: \n";
	cout << "List of armors: \n";
	for (int i = 0; i < 3; i++)
	{
		cout << i << ": " << armorList[i] << endl;
	}
	cin >> armorNo;
	if (armorNo == 99)
	{
		string newArmor;
		cout << "What is the name of your armor? \n";
		cin >> newArmor;
		addArmor(newArmor);
	}
	else
	{
		addArmor(armorList[armorNo]);
	}
}
// Prompts the user to add an item
void Equipment::setItem() {
	string newItem;
	cout << "What is the name of your item? \n";
	cin >> newItem;
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
	string weapon;
	string armor;
public:
	void setWeapon();
	void setArmor();
	string getWeapon()const;
	string getArmor()const;
};
void Equipment::setWeapon() {
	cout << "please enter your weapon: ";
	cin >> weapon;
}
void Equipment::setArmor() {
	cout << "please enter your armor: ";
	cin >> armor;
}
string Equipment::getWeapon()const {
	return weapon;
}
string Equipment::getArmor()const {
	return armor;
}
	

#endif // !EQUIPMENT_H
