#include<iostream>
#include <string>
#include "StringDLinkedList.h"

//default constructor
doubleStringList::doubleStringList()
{
	head = nullptr;
	tail = nullptr;

}







//a destructor: to delete any remaining nodes, member functions to access, delete and append a value at either end of the list 
doubleStringList::~doubleStringList()
{

}






// a member function that removes an instances of a specific value
void doubleStringList::remove(Node* cur)
{
	if (cur = head)
	{
		head = head->next;
		head->prev = nullptr;
		delete cur; 
	}
	else if (cur = tail)
	{
		tail = tail->prev;
		tail->next = nullptr;
		delete cur; 
	}
	else
	{
		cur->prev->next = cur->next;
		cur->next->prev = cur->prev;
	}

}

// a member function that removes all instances of a specific value
void doubleStringList::removeAll(const string & toRmv)
{
	Node * cur = head;

	while (cur != tail)
	{
		if (cur->data == toRmv)
		{
			cur = cur->next;
			remove(cur->prev); //It removes one node 
		}
		else
			cur = cur->next;
	}
	if (cur->data == toRmv)
		remove(cur); //removes one node
}




//display forwards: It will display the list from head to tail (accept a ostream reference to print to which will make them easy to test).
void doubleStringList::displayFoward(const ostream & out)
{
	Node *cur = head;
	while (cur != nullptr)
	{
		/*
		out << "[" << 
		*/
	}
}
//backwards: It will display the list from tail to head (accept a ostream reference to print to which will make them easy to test).
void doubleStringList::displayBackwards(const ostream & out)
{

}





//front (return the value of the first thing in the list)
string doubleStringList::front()
{
	return head->data;
}
//back (return the value of the first thing in the list)
string doubleStringList::back()
{
	return tail->data;
}

//push_front: Adds a string in front of the begining of the list 
void doubleStringList::push_front( const string & value)
{
	Node *temp = new Node{ value };

	if (!head)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		temp->prev = nullptr;
		head = temp;
	}


}
//push_back: Adds a string in the back of the end of the list 
void doubleStringList::push_back(const string & value)
{
	Node *temp = new Node{ value };

	if (!head)
	{
		head = temp;

	} 
	else
	{
		tail->next = temp; 
		temp->prev = tail; 
	}

	tail = temp;

}
//pop_front: Removes a string in front of the begining of the list 
void doubleStringList::pop_front()
{
	//specil cases when we have only one 
	head = head->next;
	head->prev = nullptr;

}
//pop_back: Removes a string in the back of the end of the list 
void doubleStringList::pop_back()
{
	//specil cases when we have only one 
	tail = tail->prev;
	tail->next = nullptr;
}