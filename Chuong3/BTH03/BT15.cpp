#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap lan luot 3 canh cua tam giac: ";
    cin >> a >> b >> c;

    if(a + b < c || b + c < a || a + c < b) 
        cout << "Khong tao thanh tam giac\n";
    else
    {
        if(a == b && a == c) 
            cout << "Day la tam giac deu\n";
        else if(pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2))
        {
            if(a == b || a == c || b == c)
                cout << "Day la tam giac vuong can\n";
            else cout << "Day la tam giac vuong\n";
        }
        else if(a == b || a == c || b == c)
            cout << "Day la tam giac can\n";
        else cout << "Day la tam giac thuong\n";
    }
    
    system("pause");
    return 0;
}