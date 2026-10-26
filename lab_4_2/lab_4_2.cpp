// Lab_4_1.cpp
// Лабораторна робота № 4.2
// Цикли
// Варіант 4

#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double xp, xk, dx;
    double x, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    if (dx <= 0) {
        cout << "Помилка: крок dx має бути більшим за 0!" << endl;
        return 1;
    }

    cout << fixed;

    cout << "-------------------------" << endl;
    cout << "| " << setw(7) << "x" << " | " << setw(10) << "y" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk + dx / 2.0) 
    {
        if (x <= 4.0)
        {
            if (2.0 + 2.0 * x <= 0) {
                cout << "| " << setw(7) << setprecision(2) << x
                    << " | " << setw(10) << "не існує" << " |" << endl;
                x += dx;
                continue;
            }
            B = exp(log(2.0 + 2.0 * x) + 2.0 * x);
        }
        else if (x <= 7.0)
        {
            double arg = (1.0 + x) / 9.0;
            B = (1.0 / tan(arg)) + 8.0 * x;
        }
        else
        {
            B = 1.0 - 7.0 * x + x * x - 2.0 * x * x * x;
        }

        y = 1.0 + x + B;

        cout << "| " << setw(7) << setprecision(2) << x
            << " | " << setw(10) << setprecision(4) << y << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}