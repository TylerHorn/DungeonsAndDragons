#include "stdafx.h"
#include "FeaturesAndTraits.h"
#include <iostream>
using namespace std;


FeaturesAndTraits::FeaturesAndTraits()
{
}


void FeaturesAndTraits::setFeatures() {

	string newFeature;

	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||           Features          ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	cout << "Enter the feature or trait: \n";

	cin.ignore();
	getline(cin, newFeature);

	features.push_back(newFeature);
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
