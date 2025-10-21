//	instructionIFConsoleApplication.cpp : This file contains the 'main' function.Program execution begins and ends there.
//




#include <iostream>


	//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
	void task1()
	{
		int number;
		std::cout << "Podaj liczbę całkowitą:\n";
		std::cin >> number;

		if (number > 0)
			std::cout << "Podana liczba jest dodatnia\n";

		if (number < 0)
			std::cout << "Podana liczba jest ujemna\n";

		if (number < 0)
			std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";
		
		std::cout << "Koniec programu\n";
	}




	
	//Napisz program, który wyświetli informacje czy liczba jest parzysta czy nieparzysta.
	void task2()
	{
		int number;
		 std::cout << "Podaj liczbę całkowitą:\n";
		 std::cin >> number;

		 int remiderOfDivisoin;
		 remiderOfDivisoin = number % 2;

		  if (remiderOfDivisoin == 0)
		  std::cout << "Podana liczba jest parzysta\n";

		  if (remiderOfDivisoin != 0) // == 1
		  std::cout << "Podana liczba jest nieparzysta\n";

		//------------------------------------------------------------
		  
		  if (remiderOfDivisoin == 0)
			  std::cout << "Podana liczba jest parzysta\n";
		  else
			  std::cout << "Podana liczba jest nieparzysta\n";
	}
	 	 
	//Napisz program, który wyświetli informacje czy liczba jest z zakresu <1 ; 10).
	void task3()
	{

		int number;
		std::cout << "Podaj liczbę całkowitą:\n";
		std::cin >> number;

	}

	int main()		 		 
	{
		

		setlocale(LC_CTYPE, "polish");

		task3();
	}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
