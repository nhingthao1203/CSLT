#include <iostream>
#include <iomanip>

using namespace std;

long long giaiThua(int);
long long C(int, int);
void pascal(int);

int main()
{
    int n, k, h;
    
    cout << "a. Ham tinh n! \n";
    do 
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n < 0)
            cout << "Nhap sai! Nhap lai.\n";
    } while(n < 0);
    cout << n << "! = " << giaiThua(n) << endl;

    cout << "\nb. Ham tinh to hop C(n, k) \n";
    do 
    {
        cout << "Nhap n va k(0 <= k <= n): ";
        cin >> n >> k;
        if(n <= 0 || k < 0 || n < k)
            cout << "Nhap sai! Nhap lai.\n";
    } while(n <= 0 || k < 0 || n < k);
    cout << "C(" << n << ", " << k << ") = " << C(n, k) << endl;

    cout << "c. In tam giac Pascal \n";
    do 
    {
        cout << "Nhap chieu cao tam giac: ";
        cin >> h;
        if(h <= 0) 
            cout << "Nhap sai! Nhap lai.\n";
    } while(h <= 0);
    pascal(h);

    system("pause");
    return 0;
}

long long giaiThua(int a)
{
    long long result = 1;
    for(int i = 1; i <= a; i++)
        result *= i;
    return result;
}

long long C(int a, int b)
{
    return giaiThua(a) / (giaiThua(b) * giaiThua(a - b));
}

void pascal(int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << setw(4) << C(i, j);
        cout << endl;
    }
}