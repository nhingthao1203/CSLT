#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int main()
{
    double a[MS];
    int currentS;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    do
    {
        cin >> currentS;
        if (currentS <= 0 || currentS > MS) 
        cout << "Nhap sai. Nhap lai!\n";
    }while (currentS > MS || currentS <= 0);
    if (currentS > MS)
        currentS = MS;

    for (int i = 0; i < currentS; i++)
    {
        a[i] = rand() % 100;
        cout << a[i];
        if (i != currentS - 1)
            cout << ", ";
        else 
            cout << ". \n";
    }
    
    system ("pause");
    return 0;
}