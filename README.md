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


```
<img width="860" height="264" alt="image" src="https://github.com/user-attachments/assets/99856a83-92a0-4bd1-9157-6414257b14cd" />
<img width="629" height="2253" alt="Програмування (6)" src="https://github.com/user-attachments/assets/284c819e-647e-4de9-bfa9-46ed92534727" />

<img width="1164" height="1425" alt="Програмування (7)" src="https://github.com/user-attachments/assets/b725c0ed-7242-4c83-8b29-52b6c4053d2b" />


**Опис алгоритму:**
Програма приймає два вхідні значення, виконує послідовні математичні обчислення у функції та отримує три результати. Після цього вона виводить усі обчислені значення на екран для перевірки правильності роботи алгоритму.
**Висновок:**
Програма реалізує обчислення трьох взаємопов’язаних величин за заданими формулами, використовуючи функції модуля, квадратного та кубічного кореня, а також тригонометричні функції. Отримані результати підтверджують правильність роботи алгоритму, оскільки всі обчислення виконуються відповідно до заданих математичних залежностей.
