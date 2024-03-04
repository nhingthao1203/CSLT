#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, count = 0;
    double n1;
    cout << "Nhap so tu nhien bat ky: ";
    cin >> n;
    n1 = round(sqrt(n));

    if (n < 2) cout << n << " khong phai la so nguyen to.\n";
    else
    {
        for (int i = 2; i <= n1; i++)
            if (n % i == 0) count++;
        if (count == 0) cout << n << " la so nguyen to.\n";
        else cout << n << " khong phai la so nguyen to.\n";

    }
    system("pause");
    return 0;
}