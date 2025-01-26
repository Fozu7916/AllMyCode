#include <iostream>
#include <fstream>
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


    return 0;
}
