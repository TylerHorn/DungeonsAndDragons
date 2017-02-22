//
// Created by Tyler Horn on 2/7/2017.
//
#pragma once
#ifndef DUNGEONSANDDRAGONS_MENU_H
#define DUNGEONSANDDRAGONS_MENU_H
#include <iostream>
#include <string>
using namespace std;

class Menu {

public:
    static void displayStart();
    static void displayMenu();
};

void Menu::displayMenu() {

    cout <<"                                         ###  ## ######  ######  ###  ##" << endl;
    cout <<"                                         ### ### ###  ## ###  ## ###  ##" << endl;
    cout <<"                                         ####### ###     ###  ## ###  ##" << endl;
    cout <<"                                         ## # ## #####   ###  ## ###  ##" << endl;
    cout <<"                                         ## # ## ###     ###  ## ###  ##" << endl;
    cout <<"                                         ##   ## ###  ## ###  ## ###  ##" << endl;
    cout <<"                                         ##   ## ######  ###  ##  #####" << endl;
    cout <<"                                        =================================" << endl;


    cout <<"                                             1) Create new character" << endl;
    cout <<"                                             2) Update stats" << endl;
    cout <<"                                             3) Display current stats" << endl;


}

void Menu::displayStart() {

    cout <<"######   ###  ## ######   #####  ######   #####  ######   ######      #### ###### ######    ######  #######      ####  #####   #####  ######   ######" << endl;
    cout <<"### ##  ###  ## ###  ## ###  ## ###  ## ###  ## ###  ## ###  ##     ##### ###  ## ### ##    ### ##  ###  ##    ##### ###  ## ###  ## ###  ## ###  ##" << endl;
    cout <<"###  ## ###  ## ###  ## ###     ###     ###  ## ###  ## ####       ## ### ###  ## ###  ##   ###  ## ###  ##   ## ### ###     ###  ## ###  ## ####" << endl;
    cout <<"###  ## ###  ## ###  ## ### ### #####   ###  ## ###  ##  #####    ##  ### ###  ## ###  ##   ###  ## ######   ##  ### ### ### ###  ## ###  ##  #####" << endl;
    cout <<"###  ## ###  ## ###  ## ###  ## ###     ###  ## ###  ##    ####  ######## ###  ## ###  ##   ###  ## ### ##  ######## ###  ## ###  ## ###  ##    ####" << endl;
    cout <<"### ##  ###  ## ###  ## ###  ## ###  ## ###  ## ###  ## ##  ###  ##   ### ###  ## ### ##    ### ##  ###  ## ##   ### ###  ## ###  ## ###  ## ##  ###" << endl;
    cout <<"#####    #####  ###  ##  #####  ######   #####  ###  ##  #####   ##   ### ###  ## #####     #####   ###  ## ##   ###  #####   #####  ###  ##  #####" << endl;


    cout << endl;
    cout << "                                                               Press Any Key To Start..." << endl;
}


#endif //DUNGEONSANDDRAGONS_MENU_H

