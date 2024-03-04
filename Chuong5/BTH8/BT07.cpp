#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

int FstMin(int arr[], int arrSize)
{
    int pos, min;
    min = arr[0];
    for (int i = 0; i < arrSize; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            pos = i + 1;
        }
    }
    return pos;
}

int main()
{
    int a[MS], currentS;
    cout << "Nhap so phan tu trong mang (toi da 100): ";
    cin >> currentS;
    if(currentS > MS)
        currentS = MS;

    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < currentS; i++)
    {
        cin >>a[i];
        cout << a[i];
        if (i != currentS - 1)
            cout << ", ";
        else 
            cout << ".\n";
    }
    cout << "Phan tu nho nhat trong mang lan dau xuat hien o vi tri thu: " << FstMin(a, currentS) << endl;
    
    system ("pause");
    return 0;
}