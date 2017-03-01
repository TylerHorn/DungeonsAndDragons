#include "stdafx.h"
#include "FeaturesAndTraits.h"
#include <iostream>
using namespace std;


FeaturesAndTraits::FeaturesAndTraits()
{
}


void FeaturesAndTraits::setFeatures() {
	string newFeature;
	int menu;
	bool flag = true;

	while (flag)
	{
		cout << "Please choose a feat, or to enter your own feat: \n"
			<< "1) Archery Champion\n"
			<< "2) Bone Breaker\n"
			<< "3) Combat Brute\n"
			<< "4) Enter your own\n";
		cin >> menu;

		switch (menu)
		{
		case 1:
			features.push_back("Archery Champion");
			flag = false;
			break;
		case 2:
			features.push_back("Bone Breaker");
			flag = false;
			break;
		case 3:
			features.push_back("Combat Brute");
			flag = false;
			break;
		case 4:
			cout << "What is the name of your feat? \n";
			cin.ignore();
			getline(cin, newFeature);
			features.push_back(newFeature);
			flag = false;
			break;
		default:
			cout << "Invalid input\n";
			flag = true;
		}
	}
}

void FeaturesAndTraits::displayFeatures() {
	cout << "Features and Traits: \n";
	for (int i = 0; i < features.size(); i++)
	{
		cout << features[i] << endl;
	}
}


FeaturesAndTraits::~FeaturesAndTraits()
{
}
