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
	string weapon;
	string armor;
	vector<string> weaponName = {"Knife", "Broken Sword", "Boomerang", "Throwing Star" };
	vector<string> armorName = {"Leather", "Chainmail", "Banded Mail"};
public:
	void setWeapon();
	void setArmor();
	string getWeapon()const;
	string getArmor()const;
	void addWeapon(string);
	void addArmor(string);
	void displayWeapon();
	void displayArmor();
};
/*
void Equipment::setWeapon() {
	cout << "please enter your weapon: ";
	cin >> weapon;
}
void Equipment::setArmor() {
	cout << "please enter your armor: ";
	cin >> armor;
}
*/
string Equipment::getWeapon()const {
	return weapon;
}
string Equipment::getArmor()const {
	return armor;
}
// Displays a list of weapons and prompts the user to choose by number
void Equipment::setWeapon() {
	int weaponNo;
	cout << "Please choose the corresponding number for you weapon: \n";
	displayWeapon();
	cin >> weaponNo;
	weapon = weaponName[weaponNo];
}
// Displays a list of armors and prompts the user to choose by number
void Equipment::setArmor() {
	int armorNo;
	cout << "Please choose the corresponding number for you armor: \n";
	displayArmor();
	cin >> armorNo;
	armor = armorName[armorNo];
}
// Adds a weapon to the list
void Equipment::addWeapon(string wp) {
	weaponName.push_back(wp);
}
// Adds an armor to the list
void Equipment::addArmor(string ar) {
	armorName.push_back(ar);
}

// Displays a list of weapons
void Equipment::displayWeapon() {
	cout << "List of all weapons: \n";
	for (int i = 0; i < weaponName.size(); i++)
	{
		cout << i << ": " << weaponName[i] << endl;
	}
}
// Displays a list of armors
void Equipment::displayArmor() {
	cout << "List of all armors: \n";
	for (int i = 0; i < armorName.size(); i++)
	{
		cout << i << ": " << armorName[i] << endl;
	}
}
	
#endif // !EQUIPMENT_H
