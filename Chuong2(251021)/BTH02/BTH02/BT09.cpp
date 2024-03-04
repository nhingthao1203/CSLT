#include <iostream>

using namespace std;

int main() 
{
    int bookS, cashS;
    const double TAX = 0.075, SHIP = 2000;
    double total;
    cout << "Nhap tong so sach: ";
    cin >> bookS;
    cout << "Nhap tong so tien: ";
    cin >> cashS;

    total = cashS * (1 + TAX) + bookS * SHIP;
    cout << "Tong gia tri don hang la: " << total << endl;
    system("pause");
    return 0;
}