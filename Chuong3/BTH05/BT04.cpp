#include <iostream>

using namespace std;

int main()
{
    int n, gt = 1;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if (n < 0)
            cout << "Khong hop le.\n";
    } while (n < 0);

    if (n != 0)
        for (int i = 1; i <= n; i++)
            gt *= i;
    
    cout << n << "! = " << gt << endl;
    system("pause");
    return 0;
}