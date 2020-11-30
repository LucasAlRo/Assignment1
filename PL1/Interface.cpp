
#include "Interface.h"
#include <array>
#include <iostream>
#include <string>

using namespace std;
//________Constructor and Destructor_________
Interface::Interface()
{
}

Interface::~Interface()
{
}

void Interface::startInterface()
{
    CoreLogic coreLogic;
    char option;
    do
        {
            cout << "\n\t---------------------------------------------------------\n";
            cout << "\t                          Welcome                          \n";
            cout << "\t---------------------------------------------------------\n";
            cout << "\n\tA. Consult students.\n";
            cout << "\tB. Consult projects. \n";
            cout << "\tC. Assign projects.\n";
            cout << "\tD. EXIT\n\n";
            cout << "\tSelect an option: ";
            cin >> option;
            option = toupper(option);

            switch(option)
                {
                case 'A':
                    {
                        coreLogic.readSFile();
                        break;
                    }
                case 'B':
                    {
                        coreLogic.readPFile();
                        break;
                    }
                case 'C':
                    {
                        coreLogic.projectAssignment();
                        break;
                    }

                case 'D':
                    {
                        cout << "\n\tLeaving the program...\n";
                        break;
                    }

                default:
                    cout << "\n\tIncorrect option!\n\n";
                    break;
                }
        }
    while(option != 'D');
}