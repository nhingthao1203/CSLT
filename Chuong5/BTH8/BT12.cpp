#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

void Del(int arr[], int& arrSize, int p);
void DelDup(int arr[], int& arrSize);

int main()
{
    int a[MS], currentSize;
    cout << "Nhap so phan tu cua mang: ";
    cin >> currentSize;

    cout << "Mang ban dau la: ";
    for (int i = 0; i < currentSize; i++)
    {
        a[i] = rand() % 20;
        cout << a[i];
        if (i != currentSize - 1)
            cout << ", ";
        else
            cout << ".\n";
    }

    cout << "Mang luc sau la: ";
    DelDup(a, currentSize);
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

void Del(int arr[], int& arrSize, int p)
{
    if (p <= arrSize)
    {
        for (int i = p - 1; i < arrSize; i++)
        {
            arr[i] = arr[i + 1];
        }
        arrSize--;
    }
}
void DelDup(int arr[], int& arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[i] == arr[j])
                Del(arr, arrSize, j + 1);
        }
    }
}