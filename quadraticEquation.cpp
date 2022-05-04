#include <bits/stdc++.h>
using namespace std;

void quadraticEquation(float a, float b, float c)
{
    float delta = (b * b) - 4 * a * c;

    if (delta < 0)
    {
        cout << "Equation has no answers" << endl;
    }
    else if (delta == 0)
    {
        float x1 = (-1 * b) / 2 * a;
        cout << "Equation has one answer: x = " << x1 << endl;
    }
    else
    {
        float x1 = (-1 * b - sqrt(delta)) / 2 * a;
        float x2 = (-1 * b + sqrt(delta)) / 2 * a;

        cout << "Equation has two answers: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}

int main()
{
    cout << "ax^2 + bx + c = 0" << endl;
    cout << endl;
    float num1, num2, num3;
    while (cin >> num1 >> num2 >> num3)
    {
        quadraticEquation(num1, num2, num3);
        cout << endl;
    }

    return 0;
}