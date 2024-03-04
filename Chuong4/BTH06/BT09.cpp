#include <iostream>

using namespace std;

int sumN(int n)
{
    int num, sum = 0;
    while(n > 0)
    {
        num = n % 10;
        sum += num;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen: ";
        cin >> n;
        if(n <= 0) cout << "Nhap sai! Nhap lai.\n";
    } while(n <= 0);
    
    cout << "Tong cac chu so cua so nguyen " << n << " la: " << sumN(n) << endl;
    system("pause");
    return 0;
}