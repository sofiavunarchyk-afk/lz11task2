#include <windows.h>
#include <iostream>
#include <cmath>   // дл€ sin, cos, sqrt, cbrt
using namespace std;

// ‘ункц≥€, що обчислюЇ три результати: a, b, y
void calculate(double x, double c, double& a, double& b, double& y) {
    a = cbrt(fabs(b + c));   // тимчасово b не в≥доме Ч визначимо нижче
    b = sqrt(x);
    a = cbrt(fabs(b + c));   // п≥сл€ обчисленн€ b, повторно обчислюЇмо a
    y = a * pow(sin(b), 2) + b * pow(cos(a), 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, c, a, b, y;

    cout << "¬вед≥ть значенн€ x: ";
    cin >> x;
    cout << "¬вед≥ть значенн€ c: ";
    cin >> c;

    calculate(x, c, a, b, y);

    cout << "\n–езультати обчислень:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}
