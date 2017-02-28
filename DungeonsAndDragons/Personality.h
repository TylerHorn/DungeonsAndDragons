#pragma once
#include <string>
#include <vector>
using namespace std;

class Personality
{
private:
	string ideals;
	string bonds;
	string flairs;
	vector<string> idealName = { "Power", "Charity", "Faith", "Honor" };
	vector<string> bondName = { "Revenge", "Protect", "Noble" };
	vector<string> flairName = { "Trust", "Inflexible", "Suspicious", "Greedy" };

public:
	Personality();
	~Personality();


	void setIdeals();
	void setBonds();
	void setFlairs();
	string getIdeals()const;
	string getBonds()const;
	string getFlairs()const;
	void addIdeals(string);
	void addBonds(string);
	void addFlairs(string);
	void displayIdeals();
	void displayBonds();
	void displayFlairs();
};

