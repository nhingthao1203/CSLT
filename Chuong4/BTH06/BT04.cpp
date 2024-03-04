#include <iostream>

using namespace std;

int sum(int);
int giaiThua(int);

int main()
{
    int n; 
    do 
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n <= 0) cout << "Nhap sai!!! Nhap lai.\n";
    } while(n <= 0);

    cout << "a. Tong cac so tu 1 den " << n << " la: " << sum(n) << endl;
    cout << "b. " << n << "! = " << giaiThua(n) << endl;
    system("pause");
    return 0;
}

int sum(int a)
{
    int result = 0;
    for(int i = 1; i <= a; i++)
        result += i;
    return result;
}

int giaiThua(int a)
{
    int result = 1;
    for(int i = 1; i <= a; i++)
        result *= i;
    return result;
}