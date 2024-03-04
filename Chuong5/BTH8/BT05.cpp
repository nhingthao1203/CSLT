#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int main()
{
    int a[MS], currentS, delP;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    cin >> currentS;
    if (currentS > MS)
        currentS = MS;

    for (int i = 0; i < currentS; i++)
    {
        cin >>a[i];
        cout << a[i];
        if (i != currentS - 1)
            cout << ", ";
        else 
            cout << ".\n";
    }

    cout << "Nhap vi tri can xoa: ";
    do
    {
        cin >> delP;
        if (delP < 0 || delP < currentS)
        cout <<"Nhap sai!.Nhap lai:\n"
    } while (delP < 0 || delP > currentS);
    
    
    for (int i = 0; i < currentS; i++)
    {
        if (i != delP - 1)
        {
            cout << a[i];
            if (i != currentS - 1)
                cout << ", ";
            else 
                cout << ".\n";
        }
    }

    system ("pause");
    return 0;
}