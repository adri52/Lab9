#ifndef STRINGDLL_H
#define STRINGDLL_H
#include<iostream>
#include <string>

using namespace std; 

class doubleStringList
{
private:
	//declare a struct for the list 
	struct Node
	{
		string data;
		struct Node *prev =nullptr;  //pointer to the previous node 
		struct Node *next=nullptr;  //pointer to the next node 
	};

	Node * head; 
	Node * tail;
	int size; 

public:

    //default constructor
	doubleStringList(); 
	//a destructor: to delete any remaining nodes, member functions to access, delete and append a value at either end of the list 
	~doubleStringList();
	// a member function that removes all instances of a specific value
	void removeAll(const string & toRmv ); 
	// a member function that removes an instances of a specific value
	void remove(Node* cur);
	//display forwards: It will display the list from head to tail (accept a ostream reference to print to which will make them easy to test).
	void displayFoward( ostream & out);
	//backwards: It will display the list from tail to head (accept a ostream reference to print to which will make them easy to test).
	void displayBackwards( ostream & out);
	//front (return the value of the first thing in the list)
	string front();
	//back (return the value of the first thing in the list)
	string back();
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

