#pragma once
#ifndef FEATURESANDTRAITS_H
#define FEATURESANDTRAITS_H
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class FeaturesAndTraits {
private:
	vector<string> features;
public:
	void setFeatures();
	void displayFeatures();
};

void FeaturesAndTraits::setFeatures() {
	string newFeature;
	cout << "Enter the feature or trait: \n";
	cin >> newFeature;
	features.push_back(newFeature);
}
#endif