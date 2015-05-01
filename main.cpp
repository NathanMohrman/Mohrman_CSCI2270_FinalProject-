#include <iostream>
#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "AddList.h"

using namespace std;
AddList mylist;

void displayMainMenu(int &select) // main display menu
{
    cout << "Welcome to Nathan's List:" << endl;
    cout << "" << endl;
    cout << "1. Search" << endl;
    cout << "2. Sell" << endl;
    cout << "3. End Program" << endl;
    
    cin >> select;
}

void displayItemMenu(int &select) // sub display menu
{
    cout << "" << endl;
    cout << "1. Cars " << endl;
    cout << "2. Electronics " << endl;
    cout << "3. Bikes " << endl;
    cout << "4. Free " << endl;
    cout << "5. Return to main menu " << endl;
    
    cin >> select;
}

int main()
{
    List *carList = new List(); // declare and allocate memory for new list
    List *electronicList = new List();
    List *bikeList = new List();
    FreeList *freeList = new FreeList();
    
    int select = 0;
    bool exit = false;
    while(!exit) {
        displayMainMenu(select);
        switch(select) {
            case 1:
            {
                bool exit1 = false;
                while(!exit1){
                    cout << "" << endl;
                    cout << "Search for:" << endl;
                    displayItemMenu(select);
                    switch(select) {
                        case 1:
                            cout << "Cars for sale: " <<"\n"<< endl;
                            mylist.PrintList(carList);
                            break;
                        case 2:
                            cout << "Electronics for sale: " <<"\n"<< endl;
                            mylist.PrintList(electronicList);
                            break;
                        case 3:
                            cout << "Bikes for sale: " <<"\n"<< endl;
                            mylist.PrintList(bikeList);
                            break;
                        case 4:
                            cout << "Free items: " <<"\n"<< endl;
                            mylist.FreePrintList(freeList);
                            break;
                        case 5:
                            exit1 = true;
                    }
                }break;
            }
            case 2:
            {
                string inTitle;
                string inComments;
                int inPrice;
                bool exit2 = false;
                //List *carList = new List;
                while(!exit2){
                    cout << "" << endl;
                    cout << "Sell:" << endl;
                    displayItemMenu(select);
                    switch(select) {
                        case 1:
                            getchar();
                            cout << "Enter title" << endl;
                            getline(cin, inTitle);
                            cout << "Enter comments" << endl;
                            getline(cin, inComments);
                            cout << "Enter price" << endl;
                            cin >> inPrice;
                            mylist.Add(carList, inTitle, inComments, inPrice);
                            break;
                        case 2:
                            getchar();
                            cout << "Enter title" << endl;
                            getline(cin, inTitle);
                            cout << "Enter comments" << endl;
                            getline(cin, inComments);
                            cout << "Enter price" << endl;
                            cin >> inPrice;
                            mylist.Add(electronicList, inTitle, inComments, inPrice);
                            break;
                        case 3:
                            getchar();
                            cout << "Enter title" << endl;
                            getline(cin, inTitle);
                            cout << "Enter comments" << endl;
                            getline(cin, inComments);
                            cout << "Enter price" << endl;
                            cin >> inPrice;
                            mylist.Add(bikeList, inTitle, inComments, inPrice);
                            break;
                        case 4:
                            getchar();
                            cout << "Enter title" << endl;
                            getline(cin, inTitle);
                            cout << "Enter comments" << endl;
                            getline(cin, inComments);
                            mylist.FreeAdd(freeList, inTitle, inComments);
                            break;
                        case 5:
                            exit2 = true;
                    }
                }break;
            }
            case 3:
                exit = true;
                break;
                
        }
    }
}


