#include<iostream>
#include<string>
#include<sstream>
#include "StringDLinkedList.h"
#include"catch.hpp"

using namespace std;


TEST_CASE("String Double Link List Functions")
{
	doubleStringList list;

	SECTION("push_back")
	{
		ostringstream oss;


		list.push_back("1"); {
			list.displayFoward(oss);
			REQUIRE(oss.str() == "{1, }"); }


		list.push_back("3"); 
		list.push_back("6"); 
		list.displayFoward(oss);
		REQUIRE(oss.str() == "{1, 3, 6, }"); 

	



	}
}

