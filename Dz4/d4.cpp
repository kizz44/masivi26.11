#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //ЗАДАНИЕ 1
    
    const int size = 10;
    int array[size];
    
    srand(time(0));
   
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100; 
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int min = array[0], max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    //ЗАДАНИЕ 2

    const int size1 = 10;
    int array1[size1];
    int limit;
    int sum = 0;

    srand(time(0));

    for (int i = 0; i < size1; ++i) {
        array1[i] = rand() % 100;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size1; ++i) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Введите число (лимит): ";
    cin >> limit;

    for (int i = 0; i < size1; ++i) {
        if (array1[i] < limit) {
            sum += array1[i];
        }
    }

    cout << "Сумма элементов, меньших " << limit << ": " << sum << endl;

    //ЗАДАНИЕ 3

    //---


        return 0;
    }