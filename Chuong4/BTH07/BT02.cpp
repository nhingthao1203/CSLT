#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    int temp;
    while(true)
    {
        if(b == 0) 
        {
            return a;
            break;
        }
        temp = a % b;
        a = b;
        b = temp;
    }
}

int main()
{
    int m, n;
    do 
    {
        cout << "Nhap vao 1 phan so duong (gom tu va mau): ";
        cin >> m >> n;
        if(m <= 0 || n <= 0)
            cout << "Nhap sai!! Nhap lai.\n";
    } while(m <= 0 || n <= 0);

    cout << "Rut gon cua phan so " << m << " / " << n << " = ";
    cout << m / UCLN(m, n) << " / " << n / UCLN(m, n) << endl;
    system("pause");
    return 0;
}