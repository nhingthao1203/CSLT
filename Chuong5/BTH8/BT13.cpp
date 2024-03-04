#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

void CountDup(int arr[], int& arrSize);

int main()
{
    int a[MS], currentSize;
    cout << "Nhap so phan tu cua mang: ";
    cin >> currentSize;

    cout << "Mang ban dau la: ";
    for (int i = 0; i < currentSize; i++)
    {
        a[i] = rand() % 100 + 1;
        cout << a[i];
        if (i != currentSize - 1)
            cout << ", ";
        else
            cout << ".\n";
    }

    CountDup(a, currentSize);
    system ("pause");
    return 0;
}

void CountDup(int arr[], int& arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] != 0)
        {
            int count = 1;
            for (int j = i + 1; j < arrSize; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = 0;
                }
            }
            cout << "So " << arr[i] << " xuat hien: " << count << " lan.\n";
        }
    }
}