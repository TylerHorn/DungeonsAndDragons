#include "stdafx.h"
#include "FeaturesAndTraits.h"
#include <iostream>
using namespace std;


FeaturesAndTraits::FeaturesAndTraits()
{
}


void FeaturesAndTraits::setFeatures() {
	std::string newFeature;
	std::cout << "Enter the feature or trait: \n";
	cin >> newFeature;
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
