// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <string>

//int argc, const char * argv[]
int main()
{
	ex02();
	ex03();
	ex04();
	ex05();

	
	return 0;
}

void ex02() {
	//a)
	bool hassPassedTest = true;
	//b)
	int x = rand() % 100 + 1;
	int y = rand() % 100 + 1;
	
	if (x = y) {
		std::cout << "X is equel to Y" << std::endl;
	}
	
	if (x > y) {
		std::cout <<"X is greater than Y" << std::endl;
	}
	else {
		std::cout << "X is less than Y" << std::endl;
	}
	//c)
	int numberOfShares;
	std::cout << "Enter a value for numberOfShares" << std::endl;
	std::cin >> numberOfShares;
	
	if (numberOfShares < 100) {
		std::cout << "numberOfShares is less than 100" << std::endl;
	}
	else {
		std::cout << "numberOfShares is not less than 100" << std::endl;
	}
	//d)
	int boxwidth;
	int bookwidth;
	std::cout << "Enter a box width" << std::endl;
	std::cin >> boxwidth;
	std::cout << "Enter a book width" << std::endl;
	std::cin >> bookwidth;
	
	if (boxwidth % bookwidth == 0){
		std::cout << "Boxwidth is evenly divisible by bookwidth" << std::endl;
	}
	else {
		std::cout << "Boxwidth is not evely divisible by bookwidth" << std::endl;
	}
	//e)
	int shelflife;
	std::cout << "Enter the shelf life of chocolate" << std::endl;
	std::cin >> shelflife;
	if (shelflife > 90) {
		shelflife--;
	}

}

void ex03() {
	//a)
	double squareArea;
	double diagonal = sqrt(squareArea);
	std::cout << "Enter the area of a square" << std::endl;
	std::cin >> squareArea;
	std::cout << diagonal << std::endl;

	//b)
	char response;
	std::cout << "(y or n)" << std::endl;
	std::cin >> response;
	if (response == 'y') {
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	//c)
	//Ihave no idea what this is!!

	//d
	//when I try to use string as an identifier it shows an error. Possibly because I'm missing a par tof the library
	//I am using a C style string instead
	char mailingAddress[] = "";
	std::cout << "Enter your mailing address" << std::endl;
	//e)
	//still need help with that one


}

void ex04() {
	//a)
	int answer;
	std::cout << "Enter and integer between 1 and 10" << std::endl;
	while (answer > 1 && answer < 10 && !std::cin.fail()) {
		std::cin.clear();
		std::cin >> answer;
	}
	//b
	int cubed;
	for (int i = 1; answer >= i; i++) {
		cubed = 3 * i;
		std::cout << cubed << std::endl;
	}
	//c)
	int index = 0;
	do {
		std::cout << "*" << std::endl;
		index++;
	} while (index < answer);
	//d)
	for (int k = 0; k <= 40; k++) {
		if (k % 2 == 0) {
			std::cout << k << std::endl;
		}
	}
	//e)
	int doubled = doubleint(answer);
	//f)
	add(rand() % 100, rand() % 100);
	//g)
}
int doubleint(int x) {
	return x * 2;
}
int add(int x, int y) {
	return x + y;
}
void addOne(int &x) {
	x++;
}


	void ex05() {

}