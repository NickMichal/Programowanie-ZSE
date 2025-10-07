#include <iostream>

/*
*.
*. 
*. 
*. 
*.
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/
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



//Program obliczający objętość stożka.
void task4()
{
    int r, h;

    std::cout << "podaj długość promienia podstawy ";
    std::cin >> r; 

    std::cout << "podaj długość promienia wysokości ";
    std::cin >> h;
    
    float area;

    area =3.14* r * r * h/3;

    std::cout << "wynik" << area << "\n";
}
//Program obliczający pole koła.
void task5()
{
    int r; 

    std::cout << "podaj długość promienia koła ";
    std::cin >> r;

    float area;

    area = 3.14 * r * r;

    std::cout << "wynik" << area << "\n"; 
}
//Program obliczający wartość wyrażenia a^2 + b^2
void task6()
{
    int a, b;
    
    std::cout << "podaj wartość wyrażenia a^2";
    std::cin >> a;

    std::cout << "podaj wartość wyrażenia b^2";
    std::cin >> b;

    int area;

    area = a ^ 2 + b ^ 2;

    std::cout << "wynik" << area << "\n";

}

//Program obliczający pole trójkąta o podstawie b i wysokości h
void task7()
{
    int b, h;
    std::cout << "podaj długość podstawy b";
    std::cin >> b;

    std::cout << "podaj długość wysokość h"; 
    std::cin >> h;
    
    float area;

    area = b * h ^2;
      
    std::cout << "wynik" << area << "\n";
}


int main()
{
    setlocale(LC_CTYPE, "polish");
    task7();
}


/* 

 Zmienna - pewien obszar w pamięci operacyjnej, w której można 
 w danej chwili przechować tylko jedną daną.

  instrukcja daklaracji zmiennej:
  typ_zmiennej nazwa_zmiennej;
   
  Typ_zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

  int - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
  
  
  
  
 









*/