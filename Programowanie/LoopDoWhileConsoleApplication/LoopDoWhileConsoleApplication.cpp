// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number;
	/*
	std::cout << "Podaj dodatni¹ liczbê:\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj dodatni¹ liczbê:\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj dodatni¹ liczbê:\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj dodatni¹ liczbê:\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj dodatni¹ liczbê:\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podaj dodatnią liczbę: " << number << "\n";
}

//Napisz program, który wylosuje liczbê 
//a nastêpnie uzytkownik bêdzie musial ja zgadnac.
void task2()
{
	int randomNumber;
	const int LOWER_RANGE = 1;
	const long UPPER_RANGE = 10000000000000000000;

	srand(time(NULL));
	 
	std::cout << "Rand() zwraca wartoœci z przedzi¹³u <0;" << RAND_MAX << ">\n";

	//LOWER_RANGE = 5; //bledna instrukcja
	//<9; 50>
	randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	//std::cout << "Wylosowana liczba: " << randomNumber << "\n";

	int number;

	/*
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;
	if (number != randomNumber)
	{
		std::cout << "Podaj liczbe:\n";
		std::cin >> number;
		if (number != randomNumber)
		{
			std::cout << "Podaj liczbe:\n";
			std::cin >> number;
			if (number != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do

	{
		std::cout << "Podaj liczbe:\n";
		std::cin >> number;
		if (number < randomNumber)
			std::cout << "Podałeś za dużą liczbe\n";
		if (number > randomNumber)
			std::cout << "Podałeś za małą liczbe\n";
	} while (number != randomNumber);

	std::cout << "Gratulacje!!!\nZgadles liczbe\n";
}


int main()
{

task2();


}

