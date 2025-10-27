<img width="522" height="437" alt="image" src="https://github.com/user-attachments/assets/ce84c902-3fc1-4725-ba69-87aec3f75bd0" />

```
#include <windows.h>
#include <iostream>
#include <cmath>   // для sin, cos, sqrt, cbrt
using namespace std;

// Функція, що обчислює три результати: a, b, y
void calculate(double x, double c, double &a, double &b, double &y) {
    a = cbrt(fabs(b + c));   // тимчасово b не відоме — визначимо нижче
    b = sqrt(x);
    a = cbrt(fabs(b + c));   // після обчислення b, повторно обчислюємо a
    y = a * pow(sin(b), 2) + b * pow(cos(a), 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, c, a, b, y;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення c: ";
    cin >> c;

    calculate(x, c, a, b, y);

    cout << "\nРезультати обчислень:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}
<img width="860" height="264" alt="image" src="https://github.com/user-attachments/assets/9f4bce18-eb01-4f69-a0d6-9505fa5850a0" />

```
