#pragma once
#ifndef PERSONALITY_H
#define PERSONALITY_H
#include<string>
#include<iostream>
using namespace std;
//I am thinking of using a vector for the personality traits.
class Personality {
private:
		vector<string> ideals;
		vector<string> bonds;
		vector<string> flairs;
		string idealName[12] = { "Power", "Charity", "Faith", "Honor", "Tradition", "Might", "Freedom", "Aspiration", "Independence", "Logic", "Respect", "Creativity" };
		string bondName[6] = { "Revenge", "Protect", "Noble", "Provide", "Sacrifice", "Vengeance" };
		string flairName[8] = { "Trust", "Inflexible" "Suspicious" "Greedy", "Kill", "Secrets", "Distracted", "Selfish" };
	
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
// Displays a list of Ideals and prompts the user to choose by number
void Personality::setIdeals() {
	int personalityNo;
	bool flag = true;
	while (flag)
	{
		int menu;
		cout << "Please choose a personality trait: \n"
			<< "1) Ideal\n"
			<< "2) Bond\n"
			<< "3) Flair\n";
		cin >> menu;

		string  newPersonality;
		switch (menu)
		{
		case 1:
			cout << "Please choose the number of a personality from the list \n";
			for (int i = 0; i < 12; i++)
			{
				cout << i << ": " << idealName[i] << endl;
			}
			cin >> personalityNo;
			addIdeals(idealName[personalityNo]);
			flag = false;
			break;
		
		case 2:
			cout << "Please choose the number of a personality from the list \n";
			for (int i = 0; i < 6; i++)
				{
					cout << i << ": " << bondName[i] << endl;
				}
			cin >> personalityNo;
			addBonds(bondName[personalityNo]);
			flag = false;
			break;

		case 3:
			cout << "Please choose the number of a personality from the list \n";
			for (int i = 0; i < 8; i++)
			{
				cout << i << ": " << flairName[i] << endl;
			}
			cin >> personalityNo;
			addFlairs(flairName[personalityNo]);
			flag = false;
			break;
		default:
			cout << "Invalid input \n";
			flag = true;
		
		}
	}
	/*cout << "Please choose the corresponding number for you ideal: \n";
	cout << "List of all ideals \n";
	for (int i = 0; i < 4; i++)
	(
		cout << i << ": " << idealList[i] << endl;
	)
	cin >> idealNo;
	//displayIdeals();
	//cin >> idealsNo;
	//ideals = idealName[idealsNo];
}
// Displays a list of Bonds and prompts the user to choose by number
void Personality::setBonds() {
	int bondsNo;
	int bondList;
	cout << "Please choose the corresponding number for you bond: \n";
	out << "List of all bonds \n";
	for (int i = 0; i < 3; i++)
	(
		cout << i << ": " << bondList[i] << endl;
	)
	cin >> bondNo;
	//displayBonds();
	//cin >> bondsNo;
	//bonds = bondName[bondsNo];
}
void Personality::setFlairs() {
	int flairsNo;
	cout << "Please choose the corresponding number for you flair: \n";
	out << "List of all flairs \n";
	for (int i = 0; i < 4; i++)
	(
		cout << i << ": " << flairList[i] << endl;
	)
	cin >> flairNo;
	//displayFlairs();
	//cin >> flairsNo;
	//flairs = flairName[flairsNo];*/
}
// Adds a ideal to the list
void Personality::addIdeals(string id) {
	ideals.push_back(id);
}
// Adds a bond to the list
void Personality::addBonds(string bd) {
	bonds.push_back(bd);
}
// Adds a flair to the list
void Personality::addFlairs(string fr) {
	flairs.push_back(fr);
}


// Displays a list of ideals
void Personality::displayIdeals() {
	cout << "List of all ideals: \n";
	for (int i = 0; i < ideals.size(); i++)
	{
		cout << i << ": " << idealName[i] << endl;
	}
}
// Displays a list of bonds
void Personality::displayBonds() {
	cout << "List of all bonds: \n";
	for (int i = 0; i < bonds.size(); i++)
	{
		cout << i << ": " << bondName[i] << endl;
	}
}
// Displays a list of flairs
void Personality::displayFlairs() {
	cout << "List of all flairs: \n";
	for (int i = 0; i < flairs.size(); i++)
	{
		cout << i << ": " << flairName[i] << endl;
	}
	
	//Displays all personalities
	void Personality::toString() {
		displayIdeals();
		displayBonds();
		displayFlairs();
	}
}
#endif // !PERSONALITY_H
