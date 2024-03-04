#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    char opr, cont;
    double result;
    int a, b;

    start:
    cout << "Chon 1 trong 4 phep tinh (+ - * /) hoac nhan q de thoat: ";
    cin >> opr;
    if(tolower(opr) != 'q')
    {
        cout << "Nhap 2 so nguyen: ";
        cin >> a >> b;
    }

    switch (tolower(opr)) 
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
    case 'q':
        goto end;
        
    default:
        cout << "Phep tinh khong hop le!!!\n";
        break;
    }

    cout << a << " " << opr << " " << b << " = ";
    cout << setprecision(2) << result << endl;

    cout << "Tiep tuc tinh toan? (y/n) ";
    cin >> cont;
    switch (tolower(cont)) 
    {
    case 'y':
        goto start;
        break;
    }

    end:
    system("pause");
    return 0;
}