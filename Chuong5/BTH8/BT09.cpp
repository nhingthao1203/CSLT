#include <iostream>
#include <cmath>
#include <cstdlib>
const int MS = 100;

using namespace std;

long DaThuc(int a[], int n, int x)
{
    long reslt = 0;
    for (int i = 0; i < n + 1; i++)
    {
        reslt += a[i] * pow(x * 1.0, i);
    }
    return reslt;
}

int main()
{
    int a[MS], n, x;
    cout << "Nhap bac n cua da thuc: ";
    cin >> n;
    cout << "Nhap gia tri x cua da thuc: ";
    cin >> x;

    for (int i = 0; i < n + 1; i++)
    {
        a[i] = rand() % 100;
    }

    cout << "Gia tri cua da thuc la: " << DaThuc(a, n, x) << endl;
    system ("pause");
    return 0;
}