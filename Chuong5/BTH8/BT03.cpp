#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int main()
{
    int a[MS], currentS, max;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    cin >> currentS;
    if (currentS > MS)
        currentS = MS;
    cout <<"Nhap mang: ";
    for (int i = 0; i < currentS; i++)
    {
        cin >> a[i];
    }
    cout <<"Mang hien tai la:\n";
    for (int i = 0; i < currentS; i++)
        if (i == currentS-1) 
            cout << a[i] <<".";
        else 
            cout << a[i] <<", ";
    cout <<endl;
    max = a[0];
    for (int i = 0; i < currentS; i++)
    {
        if(max < a[i])
            max = a[i];
    }

    cout << "So lon nhat trong chuoi la: " << max << endl;
    system ("pause");
    return 0;
}