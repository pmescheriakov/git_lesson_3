// Написать программу, кушающую с экрана числа N, m, k.
// Завести двумерный массив, хранящийся в одномерном массиве, и заполнить его числами от N до N + m * k - 1.
// Вывести на экран всё содержимое как двумерный массив(т.е.как m строк по k элементов в каждой).

#include <iostream>
#include <iomanip>  // для setw() и setfill() // первая говорит сколько под каждый вывод места брать, вторая чем пустоту заполнять

using namespace std;

int main()
{
    int N = 0;
    int m = 0;
    int k = 0;
    int size_arr = 0;
    int max_number = 0;

    setlocale(LC_ALL, "Russian"); // убирает тарабарщину, но на стаковерфлоу пугают кучей каких-то проблем

    cout << "Введите число N:" << endl;
    cin >> N;
    cout << "Введите число m:" << endl;
    cin >> m;
    cout << "Введите число k:" << endl;
    cin >> k;

    max_number = N + m * k - 1;
    size_arr = max_number - N + 1;

    int* arr = new int[size_arr]; // объявляю указатель на первый эл-т массива

    // заполнение массива
    for (int i = 0; i < size_arr; i++)
    {
        arr[i] = N + i;
    }

    // вывод массива как двумерного
    cout << endl << "-- ВЫВОД МАССИВА В ВИДЕ ДВУМЕРНОГО МАССИВА --" << endl << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++) 
        {
            cout << setw(4) << setfill(' ') << arr[i * k + j];
        }
        cout << endl;
    }

    delete[] arr;
}
