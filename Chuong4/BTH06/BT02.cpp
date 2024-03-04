#include <iostream>

using namespace std;

int max2(int, int);
int max3(int, int, int);

int main()
{
    int a, b, c;
    cout << "a. Nhap 2 so nguyen: ";
    cin >> a >> b;
    cout << "So lon nhat giua 2 so la: " << max2(a, b) << endl;

    cout << "\nb. Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
    cout << "So lon nhat giua 3 so la: " << max3(a, b, c) << endl;
    system("pause");
    return 0;
}

int max2(int a, int b)
{
    if(a > b) return a;
    else return b;
}

int max3(int a, int b, int c)
{
    /*int max;
    if(a > b) max = a;
    else max = b;
    if(c > max) max = c;
    return max;*/
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}