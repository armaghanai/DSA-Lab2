#include <iostream>

int main()
{
	int size;

	std::cout << "Enter number of employees\n";
	std::cin >> size;

	int* salArray = new int[size];

	for (int i = 0; i < size; i++) 
	{
		std::cout << "Enter Salary for employee " << (i + 1) << ": ";
		std::cin >> *(salArray + i);
	}

	// Apply increment formula
	for (int i = 0; i < size; i++)
		*(salArray + i) += *(salArray + i) / (i + 1);

	// Display updated salaries
	std::cout << "\nUpdated Salaries:\n";

	for (int i = 0; i < size; i++)
		std::cout << *(salArray + i) << '\n';

	std::cout << '\n';


	return 0;
}