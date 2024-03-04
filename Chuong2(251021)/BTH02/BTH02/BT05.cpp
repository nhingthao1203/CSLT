#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double a, b, c, p, s;

    cout << "Nhap 3 canh cua tam giac: ";
    cin >> a >> b >> c;

    if( a >= b + c || b >= a + c || c >= a + b) 
    {
        cout << "3 canh khong tao thanh tam giac.\n";
        system ("pause");
        exit(0);
        
    }
    
    p = (a + b + c)/2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Dien tich tam giac la: " << fixed << setprecision(0) << s << endl;
    system("pause");
    return 0;
}