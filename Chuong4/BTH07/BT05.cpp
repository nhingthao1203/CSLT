#include <iostream>

using namespace std;

void swap2(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

void sortA(int &a, int &b)
{
    if(a > b) swap2(a, b);
}

int main()
{
    int a, b;
    cout << "Nhap 2 so nguyen thu 1: "; cin >> a;
    cout << "Nhap 2 so nguyen thu 2: "; cin >> b;

    swap2(a, b);
    cout << "a. 2 so nguyen sau khi hoan doi: \n";
    cout << "So thu 1: " << a << endl;
    cout << "So thu 2: " << b << endl;
    sortA(a, b);
    cout << "b. 2 so nguyen tang dan la: " << a << "  " << b << endl;
    system("pause");
    return 0;
}