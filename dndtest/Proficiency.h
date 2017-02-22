/*
Create the Proficiency bonus for the charactor.
*/

#pragma once
#ifndef PROFICIENCY_H
#define PROFICIENCY_H
#include <iostream>
using namespace std;

class Proficiency {
	string proficiency

public:
	void setPf(string);
	void setPf(string pf);
	string getPf();
};
void Proficiency::setPf(string pf) {
	proficiency = pf;
}
string Proficiency::getPf() {
	return proficiency;

}

#endif // !PROFICIENCY_H