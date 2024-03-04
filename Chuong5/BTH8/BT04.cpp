#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int main()
{
    double avrg;
    int a[MS], currentS, sum = 0;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    cin >> currentS;
    if (currentS > MS)
        currentS = MS;
    cout <<"Nhap mang: ";
    for (int i = 0; i < currentS; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout <<"Mang hien tai la:\n";
    for (int i = 0; i < currentS; i++)
        if (i == currentS-1) 
            cout << a[i] <<".";
        else 
            cout << a[i] <<", ";
    cout <<endl;
    
    avrg = (sum * 1.0) / currentS; 

    cout << "Tong cac phan tu trong mang la: " << sum << ".\n";
    cout << "Trung binh cac phan tu trong mang la: " << avrg << ".\n";
    system ("pause");
    return 0;
}