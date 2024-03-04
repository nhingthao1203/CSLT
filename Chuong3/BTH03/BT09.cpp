#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    char opr;
    double result;
    int a, b;

    start:
    cout << "Nhap 2 so nguyen va 1 phep toan: ";
    cin >> a >> b >> opr;

    switch (opr) 
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0)
            {
                cout << "ERROR.\n";
                break;
            } else result = (double)a / b;    
            break;

        default:
            cout << "Phep tinh khong hop le!!!\n";
            break;
    }

    cout << a << " " << opr << " " << b << " = ";
    cout << setprecision(2) << result << endl;

    system("pause");
    return 0;
}