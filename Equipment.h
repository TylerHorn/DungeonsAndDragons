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
