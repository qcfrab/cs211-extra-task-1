#include <iostream>
#include "cs211-extra-task-1/extra-task-1.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	std::cout << "Seconds difference\nEnter the first value: ";
	double time_1, time_2;
	std::cin >> time_1;
	std::cout << "Enter the second value: ";
	std::cin >> time_2;
	std::cout << "Result: " << seconds_difference(time_1, time_2) << std::endl;
	std::cout << std::endl;

	std::cout << "Hours difference\nEnter the first value: ";
	std::cin >> time_1;
	std::cout << "Enter the second value: ";
	std::cin >> time_2;
	std::cout << "Result: " << hours_difference(time_1, time_2) << std::endl;
	std::cout << std::endl;

	return 0;
}
