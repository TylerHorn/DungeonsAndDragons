#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Equipment
{
private:
	vector<string> weapons;
	vector<string> armors;
	vector<string> items;
	string weaponList[4] = { "Knife", "Broken Sword", "Boomerang", "Throwing Star" };
	string armorList[3] = { "Leather", "Chainmail", "Banded Mail" };

public:
	Equipment();
	~Equipment();
	string weapon;
	string armor;
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

