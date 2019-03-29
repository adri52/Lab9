#include<iostream>
#include<string>
#include<sstream>
#include "StringDLinkedList.h"
#include"catch.hpp"




TEST_CASE("String Double Link List Functions")
{
	doubleStringList list;
	ostringstream oss;

	//we test the function push back with the diplay foward function
	SECTION("push_back and displayFoward")
	{
		list.push_back("1"); 
		list.push_back("3"); 
		list.push_back("6"); 
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{1, 3, 6}"); 
	}

	//we test the function push front with the diplay foward function
	SECTION("push_front and displayFoward")
	{
		list.push_front("1");
		list.push_front("3");
		list.push_front("6");
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{6, 3, 1}");	
	}

	//making a lot of values to test the functions
	list.push_back("1");
	list.push_back("3");
	list.push_back("6");
	list.push_back("1");
	list.push_back("3");
	list.push_back("6");

	SECTION("displayBackward")
	{
		list.displayBackwards(oss);
		REQUIRE(oss.str() == "{6, 3, 1, 6, 3, 1}");
	}

	SECTION("removeAll")
	{
		list.removeAll("1");
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{3, 6, 3, 6}");
	}

	SECTION("front")
	{
		REQUIRE(list.front() == "1");
	}

	SECTION("back")
	{
		REQUIRE(list.back() == "6");
	}

	//Test the pop front function with the display foward function 
	SECTION("pop_front and display foward")
	{
		list.pop_front();
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{3, 6, 1, 3, 6}");
	}

	//Test the pop front function with the display foward function 
	SECTION("pop_back and display foward")
	{
		list.pop_back();
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{1, 3, 6, 1, 3}");
	}

}

