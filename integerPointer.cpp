/*
 * integerPointer.cpp
 *
 *  Created on: Aug 17, 2025
 *      Author: Gavin LaMontagne
 */


#include <iostream>
#include <string>
using namespace std;


int main(){
	int* num1 = new int;
	int* num2 = new int;
	int* num3 = new int;

	cout << "Enter num1: ";
	cin >> *num1;

	cout << "Enter num2: ";
	cin >> *num2;

	cout << "Enter num3: ";
	cin >> *num3;

	cout << "Stored variable value:" << endl;
	cout << *num1 << *num2 << *num3 << endl;

	cout << "Pointer variable address:" << endl;
	cout << num1 << num2 << num3 << endl;

	delete num1;
	delete num2;
	delete num3;

	return 0;
}
