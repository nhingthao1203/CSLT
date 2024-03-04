#include <iostream>

using namespace std;

int main()
{
    int n, temp, sum = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    while (n < 0)
    {
        cout << "Khong hop le. Nhap lai: ";
        cin >> n;
    }

    while (n > 0)
    {
        temp = n % 10;
        if (temp % 2 != 0) sum += temp;
        n /= 10;
    }

    cout << "Tong cac chu so le la: " << sum << endl;
    system("pause");
    return 0;
}