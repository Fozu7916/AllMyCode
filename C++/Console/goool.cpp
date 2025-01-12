#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <cstdio>
#include "D:\vidiogamese\PRoekt\sum.h"
#include "D:\vidiogamese\PRoekt\tresh.cpp"
using namespace std;


int first;
void CreateArrow(int* arr, int second,int third)
{
    srand(time(NULL));
        for (int i = 0; i < second; i++)
        {
            arr[i] = rand() % third;
            cout << arr[i] << endl;
        }
    ofstream Databaze;
    Databaze.open("winform.txt");
    for (int i = 0; i < second; i++)
    {
        Databaze << arr[i] << "\t";          //вписывание элементов в массиве
    }
    cout << "Все эти числа сохраненны в файл(winform.txt)в директории программы" << endl;
    Databaze.close();
   system("winform.txt");

    delete[] arr;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int number; int size;
    cout << "Введите кол-во элементов:";
        cin >> number;
        cout << "ВВедите максимальное значение массива=";
        cin >> size;
    int* FozuArr = new int[number];
    CreateArrow(FozuArr, number,size);


    cout << " Enter для завершения программы" << endl;      while (1) { int a, b;        a = _getch();        b = static_cast <int> (a);              if (b == 13) { exit(0);                break; } else { continue; } }         return 0;
}
