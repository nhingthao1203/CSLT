#include <iostream>

using namespace std;

void swap2(int &n, int &m);
void sort2D(int, int);
void sort3A(int, int, int);
void sort3D(int, int, int);

int main()
{
    int a, b, c;

    cout << "\tNhap 2 so nguyen: "; cin >> a >> b;
    sort2D(a, b);

    cout << "\tNhap 3 so nguyen: "; cin >> a >> b >> c;
    sort3A(a, b, c);
    sort3D(a, b, c);

    system("pause");
    return 0;
}

void swap2(int &n, int &m)
{
    n += m;
    m = n - m;
    n -= m;
}

void sort2D(int a, int b)
{
    if(a < b) swap2(a, b);
    cout << "a. 2 so nguyen giam dan: " << a << " " << b << endl;
}

void sort3A(int a, int b, int c)
{
    while(a > b || a > c || b > c)
    {
        if(a > b) swap2(a, b);
        if(a > c) swap2(a, c);
        if(b > c) swap2(b, c);
    }
    cout << "b. 3 so nguyen tang dan la: ";
    cout << a << " " << b << " " << c << endl;
}

void sort3D(int a, int b, int c)
{
    while(a < b || a < c || b < c)
    {
        if(a < b) swap2(a, b);
        if(a < c) swap2(a, c);
        if(b < c) swap2(b, c);
    }
    cout << "c. 3 so nguyen giam dan la: ";
    cout << a << " " << b << " " << c << endl;
}