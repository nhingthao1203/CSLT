#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, temp, rev = 0;
    string rev1="";
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
        rev = rev * 10 + temp;
        rev1= rev1 + char(temp);
        n /= 10;
    }

    cout << "So dao nguoc la: " << rev << endl;
    cout << rev1;
    system("pause");
    return 0;
}