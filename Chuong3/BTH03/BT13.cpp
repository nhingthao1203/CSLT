#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, del, x1, x2, x;
    char again;

    start: 
    system("cls");
    cout << "Phuong trinh bac 2 co dang ax^2 + bx + c.\n";
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Phuong trinh tro thanh phuong trinh bac nhat duoi dang bx+c=0!\n";
         if (b==0 && c!=0)
        {
            cout << "Phuong trinh vo nghiem"<< endl;
        }
        else
            if (b==0 && c==0)
            {
                cout <<"Phuong trinh vo so nghiem" << endl;
            }
            else
                {
                    x = (-c)/b;
                    cout << "Nghiem cua phuong trinh la: x = " << x << endl; 
                } 
    }
    else 
    {
        del = pow(b, 2) - (4 * a * c);
        if (del > 0) 
        {
            del = sqrt(del);
            x1 = (-b + del) / (2 * a);
            x2 = (b + del) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else 
            if (del == 0)
            {
                x1 = (-b + sqrt(del)) / (2 * a);
                cout << "Phuong trinh co nghiem kep \nx = " << x1 << endl;
            }
            else cout << "Phuong trinh vo nghiem.\n";
    }
    system("pause");
    return 0;
    
}