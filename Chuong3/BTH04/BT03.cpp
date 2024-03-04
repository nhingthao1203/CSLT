#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, oddS = 0, evenS = 0;

    cout << "Nhap vao mot so nguyen duong lon hon 1: ";
    cin >> n;
    while (n <= 1)
    {
        cout << "Khong hop le. Nhap lai: ";
        cin >> n;
    }
    
    while (i <= n)
    {
        if (i % 2 != 0) oddS += i;
        else evenS += i;
        i++;
    }
    
    cout << "Tong cac so le tu 1 den " << n << " la: " << oddS << endl;
    cout << "Tong cac so chan tu 1 den " << n << " la: " << evenS << endl;
    system("pause");
    return 0;
}