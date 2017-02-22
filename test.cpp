#include<iostream>
#include<string>
#include"Race.h"
#include"SetStats.h"
#include"Equipment.h"
using namespace std;

int main() {

	//SetStats stats;
	//stats.diceRoll();

	// test equipment
	Equipment equip;

	equip.setWeapon();
	equip.setArmor();
	//cout << equip.getWeapon() << endl;
	//cout << equip.getArmor() << endl;
	
	//equip.addWeapon("Dagger");
	//equip.addArmor("Full Plate");

	equip.setWeapon();
	equip.setArmor();
	equip.setItem();
	//cout << equip.getWeapon() << endl;
	//cout << equip.getArmor() << endl;

	//equip.addItem("Potion");

	equip.toString();

	SetStats stats;
	stats.diceRoll();

	setWeapon();






	return 0;
}