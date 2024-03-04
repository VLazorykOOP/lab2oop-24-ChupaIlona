// OOPLab2Tpl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"


/// @brief 
/// @return 
int main()
{
    int a, b, c, d;
    float result;
    cout << "Task 1";
    cout << "Input a, b, c, d";
    cin >> a >> b >> c >> d;

    result = ((b + (b << 4) + ((а << 3) + (а << 6) + (а << 8) + (а << 9) + (а << 10) + (а << 11))) >> 5) - ((c << 6) + (c << 5)) + (d << 6) + (d << 6 - 1);
    cout << result;


    return 0;
}

+