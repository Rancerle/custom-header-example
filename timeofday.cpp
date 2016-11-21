//FILE: timeofday.cpp
#include<iostream>
#include "timeofday.h"

TimeOfDay::TimeOfDay()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

TimeOfDay::TimeOfDay(int initHours, int initMinutes, int initSeconds)
{
	hours = initHours;
	minutes = initMinutes;
	seconds = initSeconds;
}

TimeOfDay TimeOfDay::Increment() const
{
	//First create a duplicate of the instance so we can modify it
	TimeOfDay result(hours, minutes, seconds);

	//Increment seconds by 1
	result.seconds++;

	//Validate if hours or minutes need to increase
	if (result.seconds > 59)
	{
		result.seconds = 0;
		result.minutes++;
		if (result.minutes > 59)
		{
			result.minutes = 0;
			result.hours++;
			if (result.hours > 23)
				result.hours = 0;
		}
	}
	return result;
}

void TimeOfDay::Write() const
{
	if (hours < 10)
		std::cout << '0';
	std::cout << hours << ':';
	if (minutes < 10)
		std::cout << '0';
	std::cout << minutes << ':';
	if (seconds < 10)
		std::cout << '0';
	std::cout << seconds << std::endl;
}

bool TimeOfDay::LessThan(TimeOfDay otherTime) const
{
	return (hours < otherTime.hours
		|| hours == otherTime.hours && minutes < otherTime.minutes
		|| hours == otherTime.hours && minutes == otherTime.minutes && seconds < otherTime.seconds);
}

bool TimeOfDay::Equal(TimeOfDay otherTime) const
{
	return (hours == otherTime.hours
		&& minutes == otherTime.minutes
		&& seconds == otherTime.seconds);
}