#include "stdafx.h"
#include "Menu.h"
#include "CharacterInfo.h"
#include <stdlib.h>
using namespace std;
   /////////////////////////////
  //   Author: Tylor Horn    //
 //		tehorn@dmacc.edu    //
/////////////////////////////


// Default constructor
Menu::Menu()
{
}

// Displays main menu with game options
void Menu::displayMenu() {
	system("cls");

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                                        ###  ## ######  ######  ###  ##" << endl;
	cout << "                                                                        ### ### ###  ## ###  ## ###  ##" << endl;
	cout << "                                                                        ####### ###     ###  ## ###  ##" << endl;
	cout << "                                                                        ## # ## #####   ###  ## ###  ##" << endl;
	cout << "                                                                        ## # ## ###     ###  ## ###  ##" << endl;
	cout << "                                                                        ##   ## ###  ## ###  ## ###  ##" << endl;
	cout << "                                                                        ##   ## ######  ###  ##  #####" << endl;
	cout << "                                                                       =================================" << endl;
	cout << "                                                                         1) Create New Character" << endl;
	cout << "                                                                         2) Update Stats" << endl;
	cout << "                                                                         3) Display Character Information" << endl;
	cout << "                                                                         4) Exit" << endl;
	cout << endl;
	cout << endl;
	cout << endl;



}

// Displays the start screen and prompts for any key to start
void Menu::displayStart() {
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			######   ###  ## ######   #####  ######   #####  ######   ######      #### ###### ######    ######  #######      ####  #####   #####  ######   ######" << endl;
	cout << "			### ##  ###  ## ###  ## ###  ## ###  ## ###  ## ###  ## ###  ##     ##### ###  ## ### ##    ### ##  ###  ##    ##### ###  ## ###  ## ###  ## ###  ##" << endl;
	cout << "			###  ## ###  ## ###  ## ###     ###     ###  ## ###  ## ####       ## ### ###  ## ###  ##   ###  ## ###  ##   ## ### ###     ###  ## ###  ## ####" << endl;
	cout << "			###  ## ###  ## ###  ## ### ### #####   ###  ## ###  ##  #####    ##  ### ###  ## ###  ##   ###  ## ######   ##  ### ### ### ###  ## ###  ##  #####" << endl;
	cout << "			###  ## ###  ## ###  ## ###  ## ###     ###  ## ###  ##    ####  ######## ###  ## ###  ##   ###  ## ### ##  ######## ###  ## ###  ## ###  ##    ####" << endl;
	cout << "			### ##  ###  ## ###  ## ###  ## ###  ## ###  ## ###  ## ##  ###  ##   ### ###  ## ### ##    ### ##  ###  ## ##   ### ###  ## ###  ## ###  ## ##  ###" << endl;
	cout << "			#####    #####  ###  ##  #####  ######   #####  ###  ##  #####   ##   ### ###  ## #####     #####   ###  ## ##   ###  #####   #####  ###  ##  #####" << endl;


	cout << endl;		
	cout << "					                                                    Press Any Key To Start..." << endl;

	
}

// Displays menu for "Update stats" option
void Menu::displayStatsMenu() {
	system("cls");

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                             ###### ########   #### ######## ######         ###  ## ######  ######  ###  ##" << endl;
    cout << "                                                            ###  ## #  ###    ##### #  ###  ###  ##         ### ### ###  ## ###  ## ###  ##" << endl;
    cout << "                                                            ####       ###   ## ###    ###  ####            ####### ###     ###  ## ###  ##" << endl;
    cout << "                                                             #####     ###  ##  ###    ###   #####          ## # ## #####   ###  ## ###  ##" << endl;
    cout << "                                                               ####    ### ########    ###     ####         ## # ## ###     ###  ## ###  ##" << endl;
    cout << "                                                            ##  ###    ### ##   ###    ###  ##  ###         ##   ## ###  ## ###  ## ###  ##" << endl;
    cout << "                                                             #####     ### ##   ###    ###   #####          ##   ## ######  ###  ##  ##### " << endl;
	cout << "                                                           ===================================================================================" << endl;
	cout << "                                                                                           1) Experience Points" << endl;
	cout << "                                                                                           2) Level" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}

// Displays Character info header
void Menu::displayCharacterInfo()
{
	system("cls");

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	
    cout << "                                                 ###### ###  ##     #### #######      ####  ###### ######## ###### #######       #### ######  ######   ##### " << endl;
    cout << "                                                ###  ## ###  ##    #####  ###  ##    ##### ###  ## #  ###   ###  ## ###  ##       ### ###  ## ###  ## ###  ##" << endl;
    cout << "                                                ###     ###  ##   ## ###  ###  ##   ## ### ###        ###   ###     ###  ##       ### ###  ## ###     ###  ##" << endl;
    cout << "                                                ###     #######  ##  ###  ######   ##  ### ###        ###   #####   ######        ### ###  ## #####   ###  ##" << endl;
    cout << "                                                ###     ###  ## ########  ### ##  ######## ###        ###   ###     ### ##        ### ###  ## ###     ###  ##" << endl;
    cout << "                                                ###  ## ###  ## ##   ###  ###  ## ##   ### ###  ##    ###   ###  ## ###  ##       ### ###  ## ###     ###  ##" << endl;
    cout << "                                                 #####  ###  ## ##   ###  ###  ## ##   ###  #####     ###   ######  ###  ##       ### ###  ## ###      ##### " << endl;
	cout << "                                              ===================================================================================================================" << endl;

	
}

// Default destructor
Menu::~Menu()
{
}
