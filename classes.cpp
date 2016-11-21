#include<iostream>
#include "timeofday.h"

int main()
{
	int inputHours;
	int inputMinutes;
	int inputSeconds;

	std::cout << "Enter hours, minutes and seconds" << std::endl;
	std::cin >> inputHours >> inputMinutes >> inputSeconds;

	TimeOfDay userTime(inputHours, inputMinutes, inputSeconds);
	userTime.Write();

	return 0;
}