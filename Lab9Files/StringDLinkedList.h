#ifndef STRINGDLL_H
#define STRINGDLL_H
#include<iostream>

class doubleStringList
{
private:
	//declare a struct for the list 
	struct ListNode
	{
		string data;
		struct ListNode *previous;  //pointer to the previous node 
		struct ListNode *next;  //pointer to the next node 
	};
public:

    //The class should have a default constructor
	//a destructor: to delete any remaining nodes, member functions to access, delete and append a value at either end of the list 
	// a member function to remove all instances of a specific value
	// a member function to display the current contents of the entire list either 
	//forwards or 
	//backwards (these two function should accept a ostream reference to print to which will make them easy to test).
	//(i.e. you should support both ends; please name these front, back, push_front, push_back, pop_front, pop_back)
};






#endif // !STRINGDLL_H

