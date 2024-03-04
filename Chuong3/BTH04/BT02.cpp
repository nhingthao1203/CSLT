#include <iostream>

using namespace std;

int main() 
{
    int n, i = 3;
    long long mul = 1;

    cout << "Nhap vao mot so nguyen lon hon 1: ";
    cin >> n;
    while (n <= 1)
    {
        cout << "Khong hop le. Nhap lai: ";
        cin >> n;
    }

    while (i <= n)
    {
        if (i % 2 != 0) 
        {
            mul *= i;
        }
        i+=2;
    }

    cout << "Tich cac so le tu 1 den " << n << " la: " << mul << endl;
    system("pause");
    return 0;
}