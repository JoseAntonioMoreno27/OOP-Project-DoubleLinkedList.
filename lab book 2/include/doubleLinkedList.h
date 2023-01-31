#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class doubleLinkedList
{
private :
	Node* begin;  //!< create Node variables
	Node* end;

public :

	doubleLinkedList();     //!< the list constructor
	void add(int value);    
	void showbeginend();    //!< method to show from the top to the bottom 
	void showendbegin();    //!< method to show from the bottom to the top
	void showbegin();		//!< method to show the first element on the list
	void showend();			//!< method to show the last element on the list
	void deleteValue(int value);		//!< method to delete any element on the list

};

