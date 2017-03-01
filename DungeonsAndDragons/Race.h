#pragma once
#ifndef RACE_H
#define RACE_H
#include"SetStats.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;
//so what we're going to do here is create the different races(for now I'm thinking
//human, dwarf, elf, and orc, we can add more if we have time) and apply the
//racial bonus for that race.
class setRace {
private:
	int age, weight, speed, langChoice, alignPick;
	string name, race, raceSize, vision, traits, height, alignment;
	vector<string> wepProf;
	vector<string> armProf;
	vector<string> language;
public:
	setRace();
	void human(int[]);
	void dwarf(int&);
	void hillDwarf(int&);
	void mountainDwarf(int);
	void elf(int);
	void highElf(int);
	void woodElf(int);
	void darkElf(int);
	void halfling(int&);
	void lightfootHalfling(int&);
	void stoutHalfling(int&);
	void dragonborn(int&,int&);
	void gnome(int&);
	void forestGnome(int&);
	void rockGnome(int&);
	void halfElf(int&);
	void halfOrc(int&, int&);
	void tiefling(int&, int&);
	void printRaceTraits();
	~setRace();
	void printAllStats();
};


#endif // !RACE_H
