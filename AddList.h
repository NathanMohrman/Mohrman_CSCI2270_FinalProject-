#ifndef ADDLIST_H
#define ADDLIST_H
#include <iostream>
using namespace std;

struct List{
	std::string title;
	std::string comments;
	int price;

	List *next;
	List *previous;

	List(){
        next = NULL;
        //previous = NULL;
	};
	List(std::string in_title, std::string in_comments, int in_price)
	{
		title = in_title;
		comments = in_comments;
		price = in_price;
		next = NULL;
		//previous = NULL;
	}

};


class AddList
{
    public:
        AddList();
        void Add(List *head, std::string in_title, std::string in_comments, int in_price);
        void PrintList(List *head);
        virtual ~AddList();
    protected:
    private:
        List *addList1; // initializes now lists
        List *addList2;
        List *addList3;
        List *addList4;
};

#endif // ADDLIST_H
