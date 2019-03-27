#include<iostream>
#include <string>
#include<sstream>
#include "StringDLinkedList.h"

using namespace std; 



//default constructor
doubleStringList::doubleStringList()
{
	head = nullptr;
	tail = nullptr;
	size = 0; 

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

	size--;
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
void doubleStringList::displayFoward( ostream & out)
{
	Node *cur = head;
	int i = 1;
	if(cur != nullptr)
		out << "{" << (*cur).data; 

	while (cur != nullptr)
	{
		
		out << ", " << (*(cur+i)).data;
		i++;

	}
}
//backwards: It will display the list from tail to head (accept a ostream reference to print to which will make them easy to test).
void doubleStringList::displayBackwards( ostream & out)
{
	Node *cur = tail;
	int i = 1;
	if (cur != nullptr)
		out << "{" << (*cur).data;

	while (cur != nullptr)
	{

		out << ", " << (*(cur - i)).data;
		i--;

	}
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

	size++;

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

	size++;
}
//pop_front: Removes a string in front of the begining of the list 
void doubleStringList::pop_front()
{

	Node * temp = head;


	head = head->next;
	head->prev = nullptr;

	delete temp;

	size--; 

}
//pop_back: Removes a string in the back of the end of the list 
void doubleStringList::pop_back()
{
	

	if (tail)
	{
		Node *temp = tail; 
		tail = tail->prev;

		if (tail)
		{
			tail->next = nullptr;
		}
		else
		{
			head = nullptr;
		}

		size--; 
		delete temp;

	}

}