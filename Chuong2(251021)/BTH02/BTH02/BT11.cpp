#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double deg, rad;
    const double PI = 3.141593;

    cout << "Nhap goc x (theo do): ";
    cin >> deg;
    rad = deg * PI / 180;

    cout << "Sin " << deg << " = "  << sin(rad) << endl;
    cout << "Cos " << deg << " = "  << cos(rad) << endl;
    cout << "Tan " << deg << " = "  << tan(rad) << endl;

    system("pause");
    return 0;
}