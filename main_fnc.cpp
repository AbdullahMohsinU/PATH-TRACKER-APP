#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
#include "startup.h"
#include "global.h"
#include "Stakeholder.h"
#include "Map.h"
#include "Manager.h"  
int choice; 
using namespace std;
void clearScreen() {
    std::cout << std::string(7, '\n');  
}
int main() {
    display_title();
    display_info();
    clearScreen();
    const int MAX_STAKEHOLDERS = 600;
    Stakeholder stakeholders[MAX_STAKEHOLDERS];
    int count = 0;
    string filename = "hospital.csv"; 
    Stakeholder::loadStakeholdersFromCSV(filename, stakeholders, count, MAX_STAKEHOLDERS);
    Stakeholder::displayStakeholders(stakeholders, count);
    Stakeholder obj;
    obj.welcome();  
    obj.selection();  
    Map each;
    each.checking();  
    system("pause");

    return 0;
}
