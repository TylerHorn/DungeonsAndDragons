#include "stdafx.h"
#include "CharacterInfo.h"
#include <iostream>
#include <thread>
#include <windows.h>

using namespace std;


CharacterInfo::CharacterInfo()
{
}

// Prompt for character name, save it to the variable and display the name with 3 sec sleep.
void CharacterInfo::setCharacterName()
{
	system("cls");
	
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||        Character Name       ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;
	cout << "Enter the name that your character will go by: ";
	cin >> characterName;
	cout << endl;
	cout << characterName << " is a fine name!" << endl;
	cout << endl;
	Sleep(3000);
}

// Return the character name
string CharacterInfo::getCharacterName()
{
	return  characterName;
}

// Displays character class menu until valid option is choosen. Then assigns the choice to the characterClass variable.
void CharacterInfo::setCharacterClass()
{
	int input;
	bool flag = false;
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||        Character Class      ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;
	while (flag == false)
	{
		cout << "Choose your characters class: " << endl;
		cout << " 1) Barbarian" << endl;
		cout << " 2) Bard" << endl;
		cout << " 3) Cleric" << endl;
		cout << " 4) Druid" << endl;
		cout << " 5) Fighter" << endl;
		cout << " 6) Mage/Wizard" << endl;
		cout << " 7) Monk/Mystic" << endl;
		cout << " 8) Paladin" << endl;
		cout << " 9) Ranger" << endl;
		cout << "10) Sorcerer" << endl;
		cout << "11) Thief/Rogue" << endl;
		cout << "12) Warlock" << endl;
		cin >> input;


		cout << endl;
		cout << endl;

		if (input == 1)
		{
			characterClass = "Barbarian";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 2)
		{
			characterClass = "Bard";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 3)
		{
			characterClass = "Cleric";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 4)
		{
			characterClass = "Druid";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 5)
		{
			characterClass = "Fighter";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 6)
		{
			characterClass = "Mage/Wizard";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 7)
		{
			characterClass = "Monk/Mystic";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 8)
		{
			characterClass = "Paladin";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 9)
		{
			characterClass = "Ranger";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 10)
		{
			characterClass = "Sorcerer";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 11)
		{
			characterClass = "Thief/Rogue";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else if (input == 12)
		{
			characterClass = "Warlock";
			cout << "You chose: " << characterClass << " class." << endl;
			cout << endl;
			flag = true;
		}
		else
		{
			cout << "Invalid class selection." << endl;
			cout << endl;
			cout << endl;
			flag = false;
		}

	}
	Sleep(3000);
}

// Returns the characterClass
string CharacterInfo::getCharacterClass()
{
	return characterClass;
}

// Asks if character is pre-existing and prompts for its current level. If not pre-existing sets level to 1.
void CharacterInfo::setLevel()
{
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||        Character Level      ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;
	string ans;
	cout << "Is this a pre-existing character? (Y/N):" << endl;
	cin >> ans;
	if (ans == "Y" || ans == "y")
	{
		cout << "What is their current level: " << endl;
		cin >> level;
	}
	else if (ans == "N" || ans == "n")
	{
		level = 1;
		cout << endl;
		cout << endl;
		cout << "You shall start your journey at level 1." << endl;
	}
	Sleep(3000);
}

// Returns level
int CharacterInfo::getLevel()
{
	return level;
}

// Displays a menu of backgrounds until a valid option is choosen. Then saves the selection to the background variable.
void CharacterInfo::setBackground()
{
	bool flag = false;
	int choice;

	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Character Background    ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	while (flag == false)
	{

		cout << "Please choose your character's background: " << endl;
		cout << " 1) Acolyte" << endl;
		cout << " 2) Charlatan" << endl;
		cout << " 3) Criminal" << endl;
		cout << " 4) Entertainer" << endl;
		cout << " 5) Fold Hero" << endl;
		cout << " 6) Guild Artisan" << endl;
		cout << " 7) Hermit" << endl;
		cout << " 8) Noble" << endl;
		cout << " 9) Outlander" << endl;
		cout << "10) Sage" << endl;
		cout << "11) Sailor" << endl;
		cout << "12) Soldier" << endl;
		cout << "13) Urchin" << endl;

		cin >> choice;

		cout << endl;
		cout << endl;


		if (choice == 1)
		{
			background = "Acolyte";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 2)
		{
			background = "Charlatan";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 3)
		{
			background = "Criminal";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 4)
		{
			background = "Entertainer";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 5)
		{
			background = "Folk Hero";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 6)
		{
			background = "Guild Artisan";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;	
		}
		else if (choice == 7)
		{
			background = "Hermit";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 8)
		{
			background = "Noble";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 9)
		{
			background = "Outlander";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 10)
		{
			background = "Sage";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 11)
		{
			background = "Sailor";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 12)
		{
			background = "Soldier";
			cout << "You chose: " << background << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 13)
		{
			background = "Urchin";
			cout << "You chose: " << background << endl;
			cout << endl;
		}
		else
		{
			cout << "Please choose a valid background!" << endl;
			cout << endl;
			flag = false;
		}

	}

	Sleep(3000);
}

// Returns background
string CharacterInfo::getBackground()
{
	return background;
}

//void CharacterInfo::setRace()
//{
//}
//
//string CharacterInfo::getRace()
//{
//	return;
//}

void CharacterInfo::setAlignment()
{
	system("cls");

	int choice;
	bool flag = false;

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Character Alignment     ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	while (flag == false)
	{
		cout << "What is your character's alignment: " << endl;
		cout << "1) Lawful Good" << endl;
		cout << "2) Neutral Good" << endl;
		cout << "3) Chaotic Good" << endl;
		cout << "4) Lawful Neutral" << endl;
		cout << "5) Neutral" << endl;
		cout << "6) Chaotic Neutral" << endl;
		cout << "7) Lawful Evil" << endl;
		cout << "8) Neutral Evil" << endl;
		cout << "9) Chaotic Evil" << endl;

		cin >> choice;

		cout << endl;
		cout << endl;


		if (choice == 1)
		{
			alignment = "Lawful Good";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 2)
		{
			alignment = "Neutral Good";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 3)
		{
			alignment = "Chaotic Good";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 4)
		{
			alignment = "Lawful Neutral";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 5)
		{
			alignment = "Neutral";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 6)
		{
			alignment = "Chaotic Neutral";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 7)
		{
			alignment = "Lawful Evil";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 8)
		{
			alignment = "Neutral Evil";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else if (choice == 9)
		{
			alignment = "Chaotic Evil";
			cout << "You chose: " << alignment << endl;
			cout << endl;
			flag = true;
		}
		else
		{
			cout << "Please choose a valid alignment." << endl;
		}

		Sleep(3000);

	}

}

string CharacterInfo::getAlignment()
{
	return alignment;
}

void CharacterInfo::setExpPoints()
{
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Character Experience    ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;
	string ans;
	cout << "Is this a pre-existing character? (Y/N):" << endl;
	cin >> ans;
	if (ans == "Y" || ans == "y")
	{
		cout << "What are their current experience points: " << endl;
		cin >> expPoints;
	}
	else if (ans == "N" || ans == "n")
	{
		expPoints = 0;
		cout << endl;
		cout << endl;
		cout << "Your dungeon master shall award you points as your journey goes on." << endl;
		Sleep(3000);

	}
}

int CharacterInfo::getExpPoints()
{
	return expPoints;
}

void CharacterInfo::setPlayerName()
{
	system("cls");

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||         Player Name         ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	cout << "What is the player's name: ";
	cin >> playerName;
	cout << endl;
}

string CharacterInfo::getPlayerName()
{
	return playerName;
}

void CharacterInfo::characterInfoToString()
{
	cout << "                                                      Player Name: " << playerName << endl;
	cout << "                                                      Character Name: " << characterName << endl;
	cout << "                                                      Class: " << characterClass << endl;
	cout << "                                                      Level: " << level << endl;
	cout << "                                                      Background: " << background << endl;
	cout << "                                                      Alignment: " << alignment << endl;
	cout << "                                                      Experience Points: " << expPoints << endl;
}


CharacterInfo::~CharacterInfo()
{
}
