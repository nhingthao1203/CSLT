#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, sum = 0;

    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Khong hop le. Thu lai: ";
        cin >> n;
    }
    
    while (i <= n)
    {
        sum += i;
        i++;
    }
    
    cout << "Tong cac so nguyen tu 1 toi " << n << " la: " << sum << ".\n";
    system("pause");
    return 0;   
}