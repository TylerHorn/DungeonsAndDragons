#include "stdafx.h"
#include "CharacterInfo.h"
#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

   /////////////////////////////
  //   Author: Tylor Horn    //
 //		tehorn@dmacc.edu    //
/////////////////////////////

// Default constructor
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

	// If pre-existing character prompt for level
	if (ans == "Y" || ans == "y")
	{
		cout << "What is their current level: " << endl;
		cin >> level;
	}
	// If new character set level to 1
	else if (ans == "N" || ans == "n")
	{
		level = 1;
		cout << endl;
		cout << endl;
		cout << "You shall start your journey at level 1." << endl;
	}
	else
	{
		cout << "Invalid option!";
	}

	// Sleep for 3sec for user to see message
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

	// While flag not true display menu and input
	while (flag != true)
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

		// Checks input to varify it is one of the menu options
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
		// If not a valid option display error message and flag to continue displaying menu
		else
		{
			cout << "Please choose a valid background!" << endl;
			cout << endl;
			flag = false;
		}

	}

	// Sleep for 3sec for user to see message

	Sleep(3000);
}

// Returns background
string CharacterInfo::getBackground()
{
	return background;
}



// Displays menu for the user to choose their character's alignment
void CharacterInfo::setAlignment()
{
	system("cls");

	int choice;
	bool flag = false;

	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << "||     Character Alignment     ||" << endl;
	cout << "|||||||||||||||||||||||||||||||||" << endl;
	cout << endl;

	// While flag not true display menu and input
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

		// Checks input to varify it is one of the menu options
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
		// If not a valid option display error message and flag to continue displaying menu
		else
		{
			cout << "Please choose a valid alignment." << endl;
		}

		// Sleep for 3sec for user to see message
		Sleep(3000);

	}

}

// Returns character alignment
string CharacterInfo::getAlignment()
{
	return alignment;
}

// Asks if character is pre-existing and prompts for its current experience points. If not pre-existing sets experience to 0.
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

	// If pre-existing character prompt for experience points
	if (ans == "Y" || ans == "y")
	{
		cout << "What are their current experience points: " << endl;
		cin >> expPoints;

		cout << "Your experience points have been set to: " << expPoints << endl;
		Sleep(3000);
	}
	// If new character set experience points to 0
	else if (ans == "N" || ans == "n")
	{
		expPoints = 0;
		cout << endl;
		cout << endl;
		cout << "Your dungeon master shall award you points as your journey goes on." << endl;
		Sleep(3000);
	}
	// If input is invalid display error message
	else
	{
		cout << "Invalid option!";
	}
}

// Returns experience points
int CharacterInfo::getExpPoints()
{
	return expPoints;
}

// Prompts the user for their name
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

// Returns the player's name
string CharacterInfo::getPlayerName()
{
	return playerName;
}

// ToString to display all character information formatted
void CharacterInfo::characterInfoToString()
{
	cout << "                                                      Player Name: " << playerName << endl;
	cout << "                                                      Character Name: " << characterName << endl;
	cout << "                                                      Background: " << background << endl;
	cout << "                                                      Alignment: " << alignment << endl;
	cout << "                                                      Experience Points: " << expPoints << endl;
}

// Default destructor
CharacterInfo::~CharacterInfo()
{
}
