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
	SetStats();
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
	~SetStats();
};


#endif // !STATS_H
