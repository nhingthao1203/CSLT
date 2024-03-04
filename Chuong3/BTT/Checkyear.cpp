#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cout << "Nhap nam vao: ";
    cin >> year;
    if ( year%400==0 || ( year%4==0 && year%100!=0))
    {
        cout << year << " la nam nhuan\n";
    }
    else 
    {
        cout << year << " khong la nam nhuan\n";
    }
    system ("pause");
}