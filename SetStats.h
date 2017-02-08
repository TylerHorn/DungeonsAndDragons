#pragma once
#ifndef SETSTATS_H
#define SETSTATS_H
#include<string>
#include<random>
using namespace std;
//this is where the stats are going to be set. havent decided if getters and setters are going to be needed.
class SetStats {
private:
	string name;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
public:
	void setName(string);
	void setAllStats(int, int, int, int, int, int);
	void diceRoll();
//	void setStrength(int);
//	void setDexterity(int);
//	void setConstitution(int);
//	void setIntelligence(int);
//	void setWisdom(int);
//	void setCharisma(int);
//	string getName()const;
//	int getStrength()const;
//	int getDexterity()const;
//	int getConstitution()const;
//	int getIntelligence()const;
//	int getWisdom()const;
//	int getCharisma()const;

};
void SetStats::setName(string na) {
	name = na;
}
void SetStats::setAllStats(int str, int dex, int con, int intel, int wis, int cha) {
	strength = str;
	dexterity = dex;
	constitution = con;
	intelligence = intel;
	wisdom = wis;
	charisma = cha;
}
void SetStats::diceRoll() {
	/*this is used to set up the dice. If you are creating a character in dnd using a dice
	roll the rule is you roll 4d6 and then you drop the lowest of the 4 rolls.
	so if you roll a 1,5,4,6 you would drop 1 and add 15 to one of the stats.
	you do this 6 times, then add those scores to whatever stat you want.
	*/
	std::random_device seeder;
	std::mt19937 rand(seeder());
	std::uniform_int_distribution<int> dice(1, 6);
	const int NUM_OF_STATS = 6;
	int statsArray[NUM_OF_STATS];
	int statScore = 0;
	for (int i = 0; i < NUM_OF_STATS; i++) {
		int firstRoll = dice(rand);
		int secondRoll = dice(rand);
		int thirdRoll = dice(rand);
		int forthRoll = dice(rand);
		const int THREE_ROLLS = 3;
		const int FOUR_ROLLS = 4;
		int allRolls[FOUR_ROLLS] = { firstRoll, secondRoll, thirdRoll, forthRoll };
		int temp;
		bool swap;
		do {
			swap = false;
			for (int count = 0; count < (FOUR_ROLLS - 1); count++) {
				if (allRolls[count] > allRolls[count + 1]) {
					temp = allRolls[count];
					allRolls[count] = allRolls[count + 1];
					allRolls[count + 1] = temp;
					swap = true;
				}
			}
		} while (swap);
		statScore = allRolls[1] + allRolls[2] + allRolls[3];
		statsArray[i] = statScore;
		statScore = 0;
	}
	cout << "Results of dice roll: " << statsArray[0] << " " << statsArray[1] << " " << statsArray[2] << " " << statsArray[3] << " " << statsArray[4] << " " << statsArray[5] << endl;

	
}
//void SetStats::setStrength(int str) {
//	strength = str;
//}
//void SetStats::setDexterity(int dex) {
//	dexterity = dex;
//}
//void SetStats::setConstitution(int con) {
//	constitution = con;
//}
//void SetStats::setIntelligence(int intel) {
//	intelligence = intel;
//}
//void SetStats::setWisdom(int wis) {
//	wisdom = wis;
//}
//void SetStats::setCharisma(int cha) {
//	charisma = cha;
//}
//int SetStats::getStrength()const {
//	return strength;
//}
//string SetStats::getName()const {
//	return name;
//}
//int SetStats::getDexterity()const {
//	return dexterity;
//}
//int SetStats::getConstitution()const {
//	return constitution;
//}
//int SetStats::getIntelligence()const {
//	return intelligence;
//}
//int SetStats::getWisdom()const {
//	return wisdom;
//}
//int SetStats::getCharisma()const {
//	return charisma;
//}
#endif // !STATS_H
