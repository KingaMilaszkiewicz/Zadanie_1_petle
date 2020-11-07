// Zadanie_1_petle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program has to choose 100 numbers. After choosing, it'll show the average of all of them, the lowest and the highest value.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) // notify the compiler that the function doesn't take any arguments
{
	srand(time(0));
	int average = 0;

	for (int i = 0; i < 100; i++) {
		average += rand() % (100 + 1 - 0) + 0;
	}
	average = average / 100;
	std::cout << average;
	return 0;
}
