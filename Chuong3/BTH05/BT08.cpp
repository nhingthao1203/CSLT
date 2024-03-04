#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if (n <= 0)
            cout << "Khong hop le.\n";
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
        if (i % 2 != 0) sum += i;
    
    cout << "Tong cac so le tu 1 den " << n << " la: " << sum << endl;
    system("pause");
    return 0;
}