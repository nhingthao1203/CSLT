#include <iostream>

using namespace std;

int main()
{
    int n, tong = 0;
    int max = INT_MIN, min = INT_MAX;
    cout << "Nhap so nguyen: ";
    
    while (cin >> n)
    {
        if (max < n) max = n;
        if (min > n) min = n;
        tong += n;
    }

    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;
    cout << "Tong cac chu so vua nhap la: " << tong << endl;
    system("pause");
    return 0;
}