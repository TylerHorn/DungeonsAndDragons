#include<iostream>
#include<string>
#include"Race.h"
#include"SetStats.h"
#include"Equipment.h"
#include "Menu.h"
using namespace std;

int main() {

    Menu::displayStart();

    SetStats stats;
    stats.diceRoll();

    Menu::displayMenu();



    return 0;
}