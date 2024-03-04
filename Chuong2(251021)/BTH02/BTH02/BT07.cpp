#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() 
{
    double dis, x1, x2, y1, y2;
    cout << "Nhap toa do diem thu nhat: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem thu hai: ";
    cin >> x2 >> y2;

    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Khoang cach giua 2 diem la: " <<dis << endl;
    system("pause");
    return 0;
}