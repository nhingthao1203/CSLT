#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

void SortA(int arr[], int arrSize)
{
    int minP, temp;
    for (int i = 0; i < arrSize; i++)
    {  
        minP = i;
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[j] < arr[minP])
                minP = j;
        }
        temp = arr[i];
        arr[i] = arr[minP];
        arr[minP] = temp;
    }
}

int main()
{
    int a[MS], currentSize;
    cout << "Nhap so phan tu cua mang: ";
    cin >> currentSize;

    cout << "Mang truoc khi duoc sap xep la: ";
    for (int i = 0; i < currentSize; i++)
    {
        a[i] = rand() % 100;
        cout << a[i];
        if (i != currentSize - 1)
            cout << ", ";
        else
            cout << ".\n";
    }

    cout << "Mang sau khi sap xep la: ";
    SortA(a, currentSize);
    for (int i = 0; i < currentSize; i++)
    {
        cout << a[i];
        if (i != currentSize - 1)
            cout << ", ";
        else
            cout << ".\n";
    }
        
    system ("pause");
    return 0;
}