#include <iostream>

using namespace std;

int findFibo(int a)
{
    if(a == 1 || a == 2) return 1;
    else return findFibo(a - 1) + findFibo(a - 2);
}

int main()
{
    int n;
    do 
    {
        cout << "Ban can tim so Fibonacci thu may? ";
        cin >> n;
        if(n <= 0) cout << "Nhap sai! Nhap lai.\n";
    } while(n <= 0);

    cout << "So Fibonacci thu " << n << " la: " << findFibo(n) << endl;
    system("pause");
    return 0;
}