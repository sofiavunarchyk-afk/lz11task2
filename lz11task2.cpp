#include <windows.h>
#include <iostream>
#include <cmath>   // ��� sin, cos, sqrt, cbrt
using namespace std;

// �������, �� �������� ��� ����������: a, b, y
void calculate(double x, double c, double& a, double& b, double& y) {
    a = cbrt(fabs(b + c));   // ��������� b �� ����� � ��������� �����
    b = sqrt(x);
    a = cbrt(fabs(b + c));   // ���� ���������� b, �������� ���������� a
    y = a * pow(sin(b), 2) + b * pow(cos(a), 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, c, a, b, y;

    cout << "������ �������� x: ";
    cin >> x;
    cout << "������ �������� c: ";
    cin >> c;

    calculate(x, c, a, b, y);

    cout << "\n���������� ���������:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}
