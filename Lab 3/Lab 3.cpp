// Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
cout << "Welcome to my program, please select an operation to perform:" << endl;
cout << "1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
cout << "4. Division" << endl;
cout << "\nYour Selection: ";
cin >> choice;
}
void getChoices(float& A, float& B, float& C) {
cout << "Please enter the first value:";
cin >> A;
cout << "Please enter second value:";
cin >> B;
cout << "A= ";
cout << A << endl;
cout << "B= ";
cout << B << endl; 

// The rest of this function is an exercise to the reader
}


void firstChoice(float A, float B, float& C) {
	C = A + B;
	cout << A;
	cout << "+";
	cout << B;
	cout << "=";
cout << C << endl;
}
void secondChoice(float A, float B, float& C) {
	C = A - B;
	cout << A;
	cout << "-";
	cout << B;
	cout << "=";
	cout << C << endl;
}
void thirdChoice(float A, float B, float& C) {
	C = A * B;
	cout << A;
	cout << "*";
	cout << B;
	cout << "=";
	cout << C << endl;
}
void fourthChoice(float A, float B, float& C) {
	C = A / B;
	cout << A;
	cout << "/";
	cout << B;
	cout << "=";
	cout << C << endl;
}


int main(){
int choice;
float A;
float B;
float C;
printMenu(choice);
getChoices(A, B, C);
if (choice == 1) {
firstChoice(A, B, C);
}
if (choice == 2) {
secondChoice(A, B, C);
}
if (choice == 3) {
	thirdChoice(A, B, C);
}
if (choice == 4) {
	fourthChoice(A, B, C);
}
return 0;
}
