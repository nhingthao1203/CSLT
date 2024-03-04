#include <iostream>
using namespace std;

int main()
{
    double a, b, x;
    cout << "Phuong trinh bac nhat co dang ax + b = 0\n";
    cout << "Nhap a va b: ";
    cin >> a >> b;
    if (a==0 && b!=0)
        {
            cout << "Phuong trinh vo nghiem"<< endl;
        }
        else 
            if (a==0 && b==0)
            {
                cout <<"Phuong trinh vo so nghiem" << endl;
            }
            else 
                {
                    x = (-b)/a;
                    cout << "Nghiem cua phuong trinh la: x = " << x << endl;
                } 
    system("pause");
    return 0;
}