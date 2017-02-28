#pragma once
#include <iostream>
#include <string>
using namespace std;

class Menu
{
public:
	Menu();
	~Menu();

	static void displayStart();
	static void displayMenu();
	static void displayStatsMenu();
	static void displayCharacterInfo();
};

