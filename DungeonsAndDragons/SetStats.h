#pragma once
#ifndef SETSTATS_H
#define SETSTATS_H
#include<string>
#include<random>
#include<iostream>
#include<vector>
using namespace std;
//this is where the stats are going to be set.
class SetStats {
private:
	string name;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
	int modStr;
	int modDex;
	int modCon;
	int modIntel;
	int modWis;
	int modCha;
public:
	void setName(string);
	void setAllStats(int[]);
	void setAllStats(int, int, int, int, int, int);
	void diceRoll(int[]);
	int getStrength();
	void setStrength(int);
	int getDexterity();
	void setDexterity(int);
	int getConstitution();
	void setConstitution(int);
	int getIntelligence();
	void setIntelligence(int);
	int getWisdom();
	void setWisdom(int);
	int getCharisma();
	void setCharisma(int);
	void printAllStats();
	int getModStr(int);
	int getModDex(int);
	int getModCon(int);
	int getModIntel(int);
	int getModWis(int);
	int getModCha(int);
};
	void SetStats::setName(string na) {
		name = na;
	}
	//this method is used to set all of the stats
	void SetStats::setAllStats(int stat[]) {
		string stringStats[6] = { "strength: ","dexterity: ","constitution: ","intelligence: ","wisdom: ","charisma: " };
		int statsArray[6];
		//the stat pool is added to a vector, after the player picks a stat from that pool it is then deleted, so they can no longer pick it.
		vector<int> tempStatsArray;
		for (int i = 0; i < 6; i++) {
			tempStatsArray.push_back(stat[i]);
		}


		int statPick;
		cout << "Stat pool: 1)" << tempStatsArray[0] << " 2)" << tempStatsArray[1] << " 3)" << tempStatsArray[2] << " 4)" << tempStatsArray[3] << " 5)" << tempStatsArray[4] << " 6)" << tempStatsArray[5] << endl;
		cout << "Set the stats by using the corresponding number" << endl;
		for (int i = 0; i < 6; i++) {
			int arraySize = tempStatsArray.size();
			for (int k = 0; k < arraySize; k++) {
				cout << k + 1 << ") " << tempStatsArray[k] << " ";
			}
			cout << endl;
			cout << stringStats[i];
			cin >> statPick;
			while (statPick < 0 && statPick > arraySize) {
				cout << "Error, please select between 1-6";
				cin >> statPick;
			}
			
			int temp = tempStatsArray[statPick - 1];
			statsArray[i] = temp;
			tempStatsArray.erase(tempStatsArray.begin() + (statPick-1));
		}
		strength = statsArray[0];
		dexterity = statsArray[1];
		constitution = statsArray[2];
		intelligence = statsArray[3];
		wisdom = statsArray[4];
		charisma = statsArray[5];
	}
	//this method is used if the player just wants to manually enter their stats
	void SetStats::setAllStats(int str, int dex, int con, int intel, int wis, int cha) {
		strength = str;
		dexterity = dex;
		constitution = con;
		intelligence = intel;
		wisdom = wis;
		charisma = cha;
	}
	void SetStats::diceRoll(int stat[]) {
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
		int temp;
		bool swap;
		for (int i = 0; i < NUM_OF_STATS; i++) {
			int firstRoll = dice(rand);
			int secondRoll = dice(rand);
			int thirdRoll = dice(rand);
			int forthRoll = dice(rand);
			const int THREE_ROLLS = 3;
			const int FOUR_ROLLS = 4;
			int allRolls[FOUR_ROLLS] = { firstRoll, secondRoll, thirdRoll, forthRoll };
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
		do {
			swap = false;
			for (int i = 0; i < (NUM_OF_STATS - 1); i++) {
				if (statsArray[i] < statsArray[i + 1]) {
					temp = statsArray[i];
					statsArray[i] = statsArray[i + 1];
					statsArray[i + 1] = temp;
					swap = true;
				}
			}
		} while (swap);
		cout << "Results of dice roll: " << statsArray[0] << " " << statsArray[1] << " " << statsArray[2] << " " << statsArray[3] << " " << statsArray[4] << " " << statsArray[5] << endl;

		for (int i = 0; i < (NUM_OF_STATS); i++) {
			stat[i] = statsArray[i];
		}
	}
	int SetStats::getStrength() {
		return strength;
	}
	void SetStats::setStrength(int str) {
		strength = str;
	}
	int SetStats::getDexterity() {
		return dexterity;
	}
	void SetStats::setDexterity(int dex) {
		dexterity = dex;
	}
	int SetStats::getConstitution() {
		return constitution;
	}
	void SetStats::setConstitution(int con) {
		constitution = con;
	}
	int SetStats::getIntelligence() {
		return intelligence;
	}
	void SetStats::setIntelligence(int intel) {
		intelligence = intel;
	}
	int SetStats::getWisdom() {
		return wisdom;
	}
	void SetStats::setWisdom(int wis) {
		wisdom = wis;
	}
	int SetStats::getCharisma() {
		return charisma;
	}
	void SetStats::setCharisma(int cha) {
		charisma = cha;
	}
	void SetStats::printAllStats() {
		cout << "Strength: " << strength << endl;
		cout << "Dexterity: " << dexterity << endl;
		cout << "Constitution: " << constitution << endl;
		cout << "Intelligence: " << intelligence << endl;
		cout << "Wisdom: " << wisdom << endl;
		cout << "Charisma: " << charisma << endl;
	}
	

	int SetStats::getModStr(int str) {
		if (str == 6 || str == 7) {
			modStr = -2;
		}
		else if (str == 8 || str == 9) {
			modStr = -1;
		}
		else if (str == 10 || str == 11) {
			modStr = 0;
		}
		else if (str == 12 || str == 13) {
			modStr = 1;
		}
		else if (str == 14 || str== 15) {
			modStr = 2;
		}
		else if (str == 16 || str == 17) {
			modStr = 3;
		}
		else if (str == 18 || str == 19) {
			modStr = 4;
		}
		else {
			modStr = 5;
		}
		return modStr;
	}
	
	int SetStats::getModDex(int dex) {
		if (dex == 6 || dex == 7) {
			modDex = -2;
		}
		else if (dex == 9 || dex == 8) {
			modDex = -1;
		}
		else if (dex == 10 || dex == 11) {
			modDex = 0;
		}
		else if (dex == 12 || dex == 13) {
			modDex = 1;
		}
		else if (dex == 14 || dex == 15) {
			modDex = 2;
		}
		else if (dex == 16 || dex == 17) {
			modDex = 3;
		}
		else if (dex == 18 || dex == 19) {
			modDex = 4;
		}
		else {
			modDex = 5;
		}
		return modDex;
	}
	int SetStats::getModCon(int con) {
		if (con == 6 || con == 7) {
			modCon = -2;
		}
		else if (con == 9 || con == 8) {
			modCon = -1;
		}
		else if (con == 10 || con == 11) {
			modCon = 0;
		}
		else if (con == 12 || con == 13) {
			modCon = 1;
		}
		else if (con == 14 || con == 15) {
			modCon = 2;
		}
		else if (con== 16 || con== 17) {
			modCon = 3;
		}
		else if (con == 18 || con == 19) {
			modCon = 4;
		}
		else {
			modCon = 5;
		}
		
		return modCon;
	}
	int SetStats::getModIntel(int intel) {
		if (intel == 6 || intel == 7) {
			modIntel = -2;
		}
		else if (intel == 9 || intel == 8) {
			modIntel = -1;
		}
		else if (intel == 10 || intel== 11) {
			modIntel = 0;
		}
		else if (intel== 12 || intel== 13) {
			modIntel = 1;
		}
		else if (intel == 14 || intel == 15) {
			modIntel = 2;
		}
		else if (intel == 16 || intel == 17) {
			modStr = 3;
		}
		else if (intel == 18 || intel == 19) {
			modIntel = 4;
		}
		else {
			modIntel = 5;
		}
		
		return modIntel;
	}
	int SetStats::getModWis(int wis) {
		if (wis == 6 || wis == 7) {
			modWis = -2;
		}
		else if (wis == 9 || wis == 8) {
			modWis = -1;
		}
		else if (wis == 10 || wis== 11) {
			modWis = 0;
		}
		else if (wis== 12 || wis == 13) {
			modWis = 1;
		}
		else if (wis== 14 || wis== 15) {
			modWis = 2;
		}
		else if (wis== 16 || wis == 17) {
			modWis = 3;
		}
		else if (wis == 18 || wis == 19) {
			modWis = 4;
		}
		else {
			modWis = 5;
		}
		return modWis;
		
	}
	int SetStats::getModCha(int cha) {
		if (cha == 6 || cha == 7) {
			modCha = -2;
		}
		else if (cha == 9 || cha == 8) {
			modCha = -1;
		}
		else if (cha == 10 || cha == 11) {
			modCha = 0;
		}
		else if (cha == 12 || cha == 13) {
			modCha = 1;
		}
		else if (cha == 14 || cha == 15) {
			modCha = 2;
		}
		else if (cha == 16 || cha == 17) {
			modCha = 3;
		}
		else if (cha == 18 || cha == 19) {
			modCha = 4;
		}
		else {
			modCha = 5;
		}
		return modCha;
	}
#endif // !STATS_H
