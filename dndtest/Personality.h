#pragma once
#ifndef PERSONALITY_H
#define PERSONALITY_H
#include<string>
#include<iostream>
using namespace std;
//I am thinking of using a vector for the personality traits.
class Personality {
private:
		string ideals;
		string bonds;
		string flairs;
		vector<string> idealName = { "Power", "Charity", "Faith", "Honor" };
		vector<string> bondName = { "Revenge", "Protect", "Noble" };
		vector<string> flairName = { "Trust", "Inflexible" "Suspicious" "Greedy" };
	
public:
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

string Personality::getIdeals()const {
	return ideals;
}
string Personality::getBonds()const {
	return bonds;
}
string Personality::getFlairs()const {
	return flairs;
}
// Displays a list of weapons and prompts the user to choose by number
void Personality::setIdeals() {
	int idealsNo;
	cout << "Please choose the corresponding number for you ideal: \n";
	displayIdeals();
	cin >> idealsNo;
	ideals = idealName[idealsNo];
}
// Displays a list of armors and prompts the user to choose by number
void Personality::setBonds() {
	int bondsNo;
	cout << "Please choose the corresponding number for you bond: \n";
	displayBonds();
	cin >> bondsNo;
	bonds = bondName[bondsNo];
}
void Personality::setFlairs() {
	int flairsNo;
	cout << "Please choose the corresponding number for you flair: \n";
	displayFlairs();
	cin >> flairsNo;
	flairs = flairName[flairsNo];
}
// Adds a ideal to the list
void Personality::addIdeals(string id) {
	idealName.push_back(id);
}
// Adds an bond to the list
void Personality::addBonds(string bd) {
	bondName.push_back(bd);
}
// Adds an flair to the list
void Personality::addFlairs(string fr) {
	flairName.push_back(fr);
}


// Displays a list of ideals
void Personality::displayIdeals() {
	cout << "List of all ideals: \n";
	for (int i = 0; i < idealName.size(); i++)
	{
		cout << i << ": " << idealName[i] << endl;
	}
}
// Displays a list of bonds
void Personality::displayBonds() {
	cout << "List of all bonds: \n";
	for (int i = 0; i < bondName.size(); i++)
	{
		cout << i << ": " << bondName[i] << endl;
	}
}
// Displays a list of flairs
void Personality::displayFlairs() {
	cout << "List of all flairs: \n";
	for (int i = 0; i < flairName.size(); i++)
	{
		cout << i << ": " << flairName[i] << endl;
	}
}
#endif // !PERSONALITY_H