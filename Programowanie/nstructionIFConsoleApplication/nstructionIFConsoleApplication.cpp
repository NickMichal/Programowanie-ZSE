#include <iostream>

/*

DRY - don't repeat yourself
KISS - kept it simple stiupid

Operatry warunkowe:
>		- większy
<		- mniejszy
>=		- wiekszy bądź równy
<=		- mniejszy bądź równy
==		- równy
!=		- różny

Operatory logiczne:
&&	-	AND
||	-	OR
!	-   NOT

a	b		a && b		a || b		!a
F	F		  F			   F		 T
F	T		  F			   T		 T
T	F		  F			   T		 F
T	T	      T			   T		 F

a && b || c && d

*/

//*Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu\n";
}

//*Napisz program, który wyświetli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision == 0) // == 1 
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";
	else
		std::cout << "Podana liczba jest nieparzysta\n";
}

//*Napisz program, który wyświetli informacje czy liczba jest z zakresu <1 ; 10).

void task3()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}

	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";
}

//*Napisz program, który wykona dzielenie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat.
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj dzielnik:\n";
	std::cin >> dividend;
	std::cout << "Podaj dzielną:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}

//*Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
void task5()
{

	int year;

	std::cout << "Podaj year:";
	std::cin >> year;

	if (year >= 1)
	
		if (year < 2)
			std::cout << "Rok jest Prawidłowy\n";

		else

			std::cout << "Rok nie jest Prawidłowy\n";

	std::cout << "Koniec programu\n";
}

int main()
{
	
	setlocale(LC_CTYPE, "polish");

	task5();
}