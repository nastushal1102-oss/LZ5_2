#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 12;   // кількість елементів
    int a[n];

    // Початкові умови
    a[0] = 1;
    a[1] = 2;

    // Вивід послідовності
    cout << "Перші " << n << " елементів послідовності:" << endl;
    for (int n = 0; n < n; n++) {
        cout << "a[" << n << "] = " << a[n] << endl;
    }

    // Обчислення за рекурентною формулою
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}


