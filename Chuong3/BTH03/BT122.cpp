#include <iostream>
using namespace std;

int main()
{
    double a, b, x;
    cout << "Phuong trinh bac nhat co dang ax + b = 0\n";
    cout << "Nhap a va b: ";
    cin >> a >> b;
    if (a==0)
    {
        if (b==0)
        {
            cout <<"PTVSN"<< endl;
        }
        else 
            if (b!=0)
            {
                cout << "PTVN" << endl;
            }
    }
    else 
    {
        x=-b/a;
        cout << "PT co nghiem:"<< x << endl;
    }
    system("pause");
    return 0;
}