#include <iostream>
#include <iomanip>
#include <cctype>
#include <conio.h>

using namespace std;

int main()
{
    char opr, cont;
    double result;
    int a, b;

    cont='y';
    while (cont=='y')
    {
        result=0;
        cout << "Chon 1 trong 4 phep tinh (+ - * /) hoac nhan q de thoat: ";
        cin >> opr;
        if(opr != 'q')
        {
            cout << "Nhap 2 so nguyen: ";
            cin >> a >> b;
        }

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
                exit(0);
            } else 
                if( b!=0 )
                {
                    result = (double)a / b;    
                    break;
                }
        case 'q':
            exit (0);
        default:
            cout << "Phep tinh khong hop le!!!\n";
            break;
        }

        cout << a << " " << opr << " " << b << " = ";
        cout << setprecision(2) << result << endl;

        cout << "Tiep tuc tinh toan? (y/n) ";
        cin >> cont;
    }
    //system("pause");
    _getch();
    return 0;
}