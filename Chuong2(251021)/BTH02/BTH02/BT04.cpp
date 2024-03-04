#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    const double PI = 3.141593;
    double r;

    do
    {
        cout << "Nhap ban kinh hinh tron: ";
        cin >> r;
    } while (r < 0);

    cout << "Dien tich hinh tron: " << fixed << setprecision(0) << PI * pow(r, 2) << endl;
    cout << "Chu vi hinh tron: " << 2 * PI * r << endl;
    system("pause");
    return 0;
}