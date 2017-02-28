#pragma once
#include <string>
#include <vector>

class FeaturesAndTraits
{
private:
	std::vector<std::string> features;
public:
	FeaturesAndTraits();
	~FeaturesAndTraits();

	void setFeatures();
	void displayFeatures();
};

