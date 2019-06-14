/*
 * Main.cpp
 *
 *  Created on: 14 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

void manipulate(double *ptrValue)
{
	cout << "2. Value of double in manipulate = " << *ptrValue << endl;

	*ptrValue = 10;
	cout << "3. Value of double in manipulate = " << *ptrValue << endl;
}

int main()
{
	int numValue = 8;

	int *ptrNumValue = &numValue;		/*
	 	 	 	 	 	 	 	 	 	 * '&' read the ampersand as 'address of'
	 	 	 	 	 	 	 	 	 	 * So this is a pointer, denoted by '*' called
	 	 	 	 	 	 	 	 	 	 * 'ptrNumValue' and is pointing and set to the
	 	 	 	 	 	 	 	 	 	 * address location hex value of the in variable
	 	 	 	 	 	 	 	 	 	 * declared above called 'numValue'
	 	 	 	 	 	 	 	 	 	 */

	numValue = 10;

	cout << "Num value = " << numValue << endl;
	cout << "Pointer to the numValue address = " << ptrNumValue << endl;
	cout << "Int value via pointer = " << *ptrNumValue << endl;		/*
																	 * This line is known as
																	 * Dereferencing and is a
																	 * way of accessing the
																	 * value stored at a memory
																	 * address via the pointer.
																	 */

	cout << "#################################################" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;

	manipulate(&dValue);

	cout << "4. dValue: " << dValue << endl;




	return 0;
}


