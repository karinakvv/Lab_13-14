// Lab_13-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Створити лінійний двозв’язний список з дійсних чисел. Вилучити зі списку елемент 
// перед кожним елементом зі значенням в інтервалі від 10 до 20.

#include <iostream>
#include <list>
#include <windows.h> 
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    list<double>myList = { 6.5, 45.6, 12.3, 6.7, 10.9, 8.7, 5.3};

    cout << "Список цілих чисел: ";
    for (double number : myList) {
        cout << number << " ";
    }
    cout << endl;

    auto it = myList.begin();
    while (it != myList.end()) {
        if (*it >= 10 && *it <= 20) { 
            if (it != myList.begin()) { 
                auto prevIt = prev(it);
                myList.erase(prevIt);   
            }
        }
        ++it; 
    }
    // Виведення оновленого списку
    cout << "\nОновлений список: ";
    for (double number : myList) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
