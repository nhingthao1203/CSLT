#include <iostream>

using namespace std;

bool compN(int a)
{
    bool comp;
    int sum = 0;
    for(int i = 1; i < a; i++)
        if(a % i == 0) sum += i;
    if(a == sum) 
        comp = true;
    else comp = false;
    return comp;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n <= 0) cout << "Nhap sai! Nhap lai.\n";
    } while(n <= 0);

    if(compN(n)) 
        cout << n << " la so hoan thien.\n";
    else cout << n << " la so khong hoan thien.\n";
    system("pause");
    return 0;
}