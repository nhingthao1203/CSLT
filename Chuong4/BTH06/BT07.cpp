#include <iostream>

using namespace std;

bool ngTo(int a)
{
    bool nT = true;
    if(a >= 2)
    {
        for(int i = 2, count = 0; i <= a; i++)
        {
            if(count > 1) 
            {
                nT = false;
                break;
            }
            if(a % i == 0) count++;
        }
    } else nT = false;
    return nT;
}

int main()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    if(ngTo(n))
        cout << n << " la so nguyen to.\n";
    else cout << n << " khong phai la so nguyen to.\n";
    system("pause");
    return 0;
}