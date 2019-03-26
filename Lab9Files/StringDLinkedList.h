#ifndef STRINGDLL_H
#define STRINGDLL_H
#include<iostream>
#include <string>

using namespace std; 

class doubleStringList
{
private:
	//declare a struct for the list 
	struct ListNode
	{
		string data;
		struct ListNode *prev;  //pointer to the previous node 
		struct ListNode *next;  //pointer to the next node 
	};

	string * head; 
	string * tail;

public:

    //default constructor
	doubleStringList(); 
	//a destructor: to delete any remaining nodes, member functions to access, delete and append a value at either end of the list 
	~doubleStringList();
	// a member function to remove all instances of a specific value
	void remove();  //deletes all the values in the list? 
	//*************************************************************************************************************
	// a member function to display the current contents of the entire list either 
	//forwards or 
	//backwards (these two function should accept a ostream reference to print to which will make them easy to test).
	//*****************************************************************************************************************
	//front (return the value of the first thing in the list?)
	//back (return the value of the first thing in the list?)

	//push_front: Adds a string in front of the begining of the list 
	void push_front(const string & value);
	//push_back: Adds a string in the back of the end of the list 
	void push_back(const string & value);
	//pop_front: Removes a string in front of the begining of the list 
	void pop_front();
	//pop_back: Removes a string in the back of the end of the list 
	void pop_back(); 
};






#endif // !STRINGDLL_H

