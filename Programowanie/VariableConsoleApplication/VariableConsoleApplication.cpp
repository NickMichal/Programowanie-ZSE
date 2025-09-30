#include <iostream>

//Napisz program który wczyta liczbę od użytkownika i ją wyświetli na kontroli
void task1()
{
   //wczytanie liczby
      //deklaracja zmennych         1
     //pobranie liczby          
        //informcja co chcemy       2
        //oczekiwanie na liczbę     3

    //wyświetlenie na konsoli       4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczbę całkowtą;\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << " podałeś " << numberFromUser << "\n";
}

//Program obliczający średnią arytmetyczną dwóch liczb
void task2()
{
    int firstnumber, secondNumber;

    std::cout << "Podaj pierwszą liczbe:\n";
    std::cin >> firstnumber;

    std::cout << "Podaj drugą liczbe:\n";
    std::cin >> secondNumber;

    int avg;

    avg = (firstnumber + secondNumber) / 2;

    std::cout << "wynik średniej:  " << avg << "\n";
}


//Program obliczający pole prostokąta
void task3()
{
    int sideA, sideB;
    
    std::cout << "podaj długość first side:\n";
    std::cin >> sideA;

    std::cout << "podaj długość secound side:\n";
    std::cin >> sideB;

    int area;

    area = sideA*sideB;

    std::cout << "wynik " << area << "\n";
}




int main()
{
   
    task3();
}








/* 

 Zmienna - pewien obszar w pamięci operacyjnej, w której można 
 w danej chwili przechować tylko jedną daną.

  instrukcja daklaracji zmiennej:
  typ_zmiennej nazwa_zmiennej;
   
  Typ_zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

  int - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
  
  
  
  
 









*/