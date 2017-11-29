#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "CashierUI.h"
#include "MainUI.h"

CashierUI::CashierUI()
{
    startUI();
}

CashierUI::~CashierUI()
{
    //dtor
}

void CashierUI::startUI()
{
    char choice = '\0';
    while(choice != 'b') {
        system("CLS");
        cout << "Cashier: " << endl;
        cout << " +------------------+" << endl;
        cout << " |1. Your location  |" << endl;
        cout << " |2. Charge Order   |" << endl;
        cout << " |3. Back           |" << endl;
        cout << " +------------------+" << endl;
        cout << " (1-3): ";
        cin >> choice;
        
        if (choice == '1') {
            //Location location;
        } else if (choice == '2') { 
            //
        } else if (choice == '3') {
            return;
        }
    }
}
