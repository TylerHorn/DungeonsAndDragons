#pragma once
#include <stddef.h>
#include <iostream>
#include <string>
using namespace std;



class Race
{
public:
	Race();
	~Race();

	string race;
	void setRace(string);
	string getRace();
};

