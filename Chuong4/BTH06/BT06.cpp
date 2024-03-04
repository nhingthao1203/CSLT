#include <iostream>

using namespace std;

int revNum(int a)
{
    int num, revN = 0;
    while(a > 0)
    {
        num = a % 10;
        revN = revN * 10 + num;
        a /= 10;
    }
    return revN;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n <= 0) cout << "Nhap sai!! Nhap lai.\n";
    } while(n <= 0);

    cout << "So nghich dao cua " << n << " la: " << revNum(n) << endl;
    system("pause");
    return 0;
}