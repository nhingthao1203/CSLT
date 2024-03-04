#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int countT(int arr[], int arrSize, int x)
{
    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;    
}

int main()
{
    int a[MS], currentS, x;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    cin >> currentS;
    if (currentS > MS)
        currentS = MS;

    for (int i = 0; i < currentS; i++)
    {
        cin >> a[i];
        cout << a[i];
        if (i != currentS - 1)
            cout << ", ";
        else 
            cout << ".\n";
    }

    cout << "Nhap so can dem: ";
    cin >> x;
    cout << "So " << x << " xuat hien " << countT(a, currentS, x) << " lan trong mang.\n";
    system ("pause");
    return 0;
}