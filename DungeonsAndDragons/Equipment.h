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
	string simpleMelee[10] = {"Club", "Dagger", "Greatclub", "Handaxe", "Javelin", "Light hammer", 
		"Mace", "Quarterstaff", "Sickle", "Spear"};
	string simpleRanged[4] = {"Crossbow, light", "Dart", "Shortbow", "Sling"};
	string martialMelee[18] = {"Battleaxe", "Hail", "Glaive", "Greataxe", "Greatsword", "Halberd", 
		"Lance", "Longsword", "Maul", "Morningstar", "Pike", "Rapier", "Scimitar", "Shortsword", 
		"Trident", "War pick", "Warhammer", "Whip"};
	string martialRanged[5] = {"Blowgun", "Crossbow, hand", "Crossbow, heavy", "Longbow", "Net"};
	string lightArmor[3] = {"Padded", "Leather", "Studded leather"};
	string mediumArmor[5] = {"Hide", "Chain shirt", "Scale mail", "Breastplate", "Half plate"};
	string heavyArmor[4] = {"Ring mail", "Chain mail", "Splint", "Plate"};

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

