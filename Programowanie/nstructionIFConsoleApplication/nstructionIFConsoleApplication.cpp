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

//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
@@ -47,7 +60,7 @@
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision != 0) // == 1 
	if (reminderOfDivision == 0) // == 1 
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
@@ -85,6 +98,26 @@
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 3
	if (number >= 1 && number < 10 )
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

int main()

{
	setlocale(LC_CTYPE, "polish");

	task4();
}