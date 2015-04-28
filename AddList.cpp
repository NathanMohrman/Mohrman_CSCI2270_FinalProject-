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

void AddList::PrintList(List *head){ // print list until head next is null
    while(head->next != NULL){
        cout << head->next->title << endl; // first index of list is zero so the first is next->next
        cout << head->next->comments << endl;
        cout << head->next->price << endl;
        cout << "" << endl;

        head = head->next;

    }
}

void AddList::Add(List *head, std::string in_title, std::string in_comments, int in_price){ // add function
    List * newItem = new List(in_title, in_comments, in_price); // create new list item
    while(head->next != NULL){ // while there is room in the list
        head = head->next; // move list index to next
    }
    head->next = newItem; // list new item as next in list
    head = head->next; // point to next index in list
}




