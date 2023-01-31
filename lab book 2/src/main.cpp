

 // Define and includes to show memory leak report


#include <iostream>
#include "doubleLinkedList.h"
#include "Node.h"

using namespace std;


int main() //!< Entry point for the application 
{
	doubleLinkedList myList;
	myList.add(78);
	myList.add(27);
	myList.add(2);
	myList.add(358);
	myList.add(29);
	myList.add(54);
	myList.showbeginend();
	cout << endl;
	myList.showendbegin();
	cout << endl;
	myList.showbegin();
	myList.showend();

	cout << endl;
	myList.deleteValue(2);
	myList.showbeginend();



}

