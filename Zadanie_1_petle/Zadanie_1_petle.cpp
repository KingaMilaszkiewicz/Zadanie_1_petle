// Zadanie_1_petle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program has to choose 100 numbers. After choosing, it'll show the average of all of them, the lowest and the highest value.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) // notify the compiler that the function doesn't take any arguments
{
	srand(time(0)); // set the randomizer seed
	int average = 0;
	int min = 100, max = 0;

	for (int i = 0; i < 100; i++) { // loop 100 times
		int randomNumber = rand() % (100) + 1; // add up all the random numbers in 1-100 scope
		average += randomNumber;

		// std::cout << randomNumber << ", "; // debug code

		if (min > randomNumber) {
			min = randomNumber;
		}
		if (max < randomNumber) {
			max = randomNumber;
		}
	}

	average = average / 100; // calculate the average

	std::cout << "average: " << average << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;

	return 0;
}
