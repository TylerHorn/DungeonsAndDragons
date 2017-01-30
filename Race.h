#pragma once
#ifndef RACE_H
#define RACE_H
#include"SetStats.h"
using namespace std;
//so what we're going to do here is create the different races(for now I'm thinking
//human, dwarf, elf, and orc, we can add more if we have time) and apply the
//racial bonus for that race.
class SetRace {
	string race;
public:
	void setRa(string);
	string getRa();
};
void SetRace::setRa(string ra) {
	race = ra;
	
	
}
string SetRace::getRa() {
	return race;
}
#endif // !RACE_H
