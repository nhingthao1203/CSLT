#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
const int MS = 100;

using namespace std;

int main()
{
    int n;
    bool a[MS];
    cout << "Nhap so nguyen n: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        a[i] = true;
        cout << setw(3) << i;
    }    
    cout << endl;

    for (int i = 2; i <= sqrt(n * 1.0); i++)
    {
        if (a[i])
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = false;
            }
        for (int k = 2; k <= n; k++)
        {
            if (a[k])
                cout << setw(3) << k;
            else 
                cout << setw(3) << " ";
        }
        cout << endl;
    }

    
    system ("pause");
    return 0;
}