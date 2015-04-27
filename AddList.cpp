#include "AddList.h"
#include <iostream>
using namespace std;

AddList::AddList()
{
    //ctor
}

AddList::~AddList()
{
    //dtor
}

void AddList::PrintList(List *head){
    while(head->next != NULL){
        cout << head->next->title << endl;
        cout << head->next->comments << endl;
        cout << head->next->price << endl;
        cout << "" << endl;

        head = head->next;

    }
}

void AddList::AddCar(List *head, std::string in_title, std::string in_comments, int in_price){
    List * newItem = new List(in_title, in_comments, in_price);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = newItem;
    head = head->next;
}

void AddList::AddElectronic(List *head, std::string in_title, std::string in_comments, int in_price){
    List * newItem = new List(in_title, in_comments, in_price);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = newItem;
    head = head->next;
}

void AddList::AddBike(List *head, std::string in_title, std::string in_comments, int in_price){
    List * newItem = new List(in_title, in_comments, in_price);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = newItem;
    head = head->next;
}

void AddList::AddFree(List *head, std::string in_title, std::string in_comments, int in_price){
    List * newItem = new List(in_title, in_comments, in_price);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = newItem;
    head = head->next;
}




