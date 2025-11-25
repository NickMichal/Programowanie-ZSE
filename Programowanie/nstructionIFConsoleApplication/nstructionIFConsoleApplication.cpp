#include <iostream>
#define if 5

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

}


//Napisz program, który wyświetli największą liczbę ze zbioru trójelementowego.
void task6()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru czteroelementowego.
void task7()
{

	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

/*
Napisz program, który poprosi użytkownika o podanie masy ciała (w kilogramach) i wzrostu (w metrach).
Na  podstawie tych danych oblicz wskaźnik BMI (Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną

Wzór:

BMI = masa/wysokość^2

*. Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.

*/

void task8()
{

	float masa, wysokość, otylosc;
	std::cout << "Podaj masę\n";
	std::cin >> masa;
	std::cout << "Podaj wzrost\n";
	std::cin >> wysokość;

	otylosc = masa / wysokość * wysokość;

	if (otylosc < 16);
			std::cout << "Masz wygłodzenie\n";
	if (otylosc <= 16);
			std::cout << "Masz wychudzenie\n";
	if (otylosc <= 16 && otylosc <= 16.99);
			std::cout << "Masz niedowagę\n";
	if (otylosc <= 17 && otylosc <= 18.49);
		std::cout << "Masz wagę prawidłową\n";
	if (otylosc <= 18.5 && otylosc <= 24.99);
		std::cout << "Masz nadwagę\n";
	if (otylosc <= 24.5 && otylosc <= 29.9);
		std::cout << "Masz I stopień otyłości\n";
	if (otylosc <= 30.0 && otylosc <= 34.99);
		std::cout << "Masz II stopień otyłości\n";
	if (otylosc <= 35.0 && otylosc <= 39.99);
		std::cout << "Masz otyłość skrajną\n";
	if (otylosc <= 40);
}
// Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
void task9()
{ 
	int pierwszybok, drugibok, trzecibok;
		std::cout << "Podaj Pierwszybok\n";
		std::cin >> pierwszybok;
		std::cout << "Podaj	drugibok\n";
		std::cin >> drugibok;
		std::cout << "Podaj	trzecibok\n";
		std::cin >> trzecibok;

		if (trzecibok > pierwszybok && trzecibok > pierwszybok)
			std::cout; 






}
int main()
{
	
	setlocale(LC_CTYPE, "polish");

	task8();
}
