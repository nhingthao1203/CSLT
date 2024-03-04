#include <iostream>
#include <cstdlib>
const int MS = 100;

using namespace std;

void nhap(int arr[], int arrSize);
void xuat(const int arr[], int arrSize);
bool tim(const int arr[], int arrSize, int x);
void daonguoc(int arr[], int arrSize);
void xoa(int arr[], int& arrSize, int p);

int main()
{
    int a[MS], currentS, x, p;

    cout << "Nhap vao so phan tu cua mang (toi da 100): ";
    cin >> currentS;
    if (currentS > MS)
        currentS = MS;

    cout << "a. Nhap mot day so nguyen vao mang.\n";
    nhap(a, currentS);
    cout << "b. In day so nguyen trong mang:\n";
    xuat(a, currentS);
    cout << "c. Nhap gia tri can tim trong mang: ";
    cin >> x;
    if (tim(a, currentS, x))
        cout << "Trong mang co chua so " << x << ".\n";
    else 
        cout << "Trong mang khong chu so " << x << ".\n";

    cout << "d. Cac phan tu trong mang sau khi dao nguoc la: \n";
    daonguoc(a, currentS);
    xuat(a, currentS);
    cout << "e. Chon vi tri phan tu muon xoa: ";
    cin >> p;
    xoa(a, currentS, p);
    xuat(a, currentS);

    system("pause");
    return 0;
}

void nhap(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
}
void xuat(const int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i];
        if (i != arrSize - 1)
            cout << ", ";
        else
            cout << ".\n";
    }
}
bool tim(const int arr[], int arrSize, int x)
{
    bool tontai = false;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == x)
        {
            tontai = true;
            break;
        }    
    }
    return tontai;
}
void daonguoc(int arr[], int arrSize)
{
    int temp;
    for (int i = 0; i < arrSize / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = temp;
    }
}
void xoa(int arr[], int& arrSize, int p)
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