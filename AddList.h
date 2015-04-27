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
	List(){};
	List(std::string in_title, std::string in_comments, int in_price)
	{
		title = in_title;
		comments = in_comments;
		price = in_price;
		next = NULL;
	}

};


class AddList
{
    public:
        AddList();
        void AddCar(List *head, std::string in_title, std::string in_comments, int in_price);
        void AddElectronic(List *head, std::string in_title, std::string in_comments, int in_price);
        void AddBike(List *head, std::string in_title, std::string in_comments, int in_price);
        void AddFree(List *head, std::string in_title, std::string in_comments, int in_price);
        void PrintList(List *head);
        virtual ~AddList();
    protected:
    private:
        List *addList;
};

#endif // ADDLIST_H
