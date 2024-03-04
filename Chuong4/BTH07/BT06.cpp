#include <iostream>

using namespace std;

void menu();
int cong(int, int);
int tru(int, int);
double nhan(int, int);
double chia(int, int);

int main()
{
    bool cont = true;
    int a, b;
    char select, c;

    while(cont)
    {
        menu();
        cout << "Nhap 2 so nguyen: ";
        cin >> a >> b;
        cout << "Chon (1-4): ";
        cin >> select;

        switch(select)
        {
        case '1':
            cout << a << " + " << b << " = " << cong(a, b);
            break;
        case '2':
            cout << a << " - " << b << " = " << tru(a, b);
            break;
        case '3':
            cout << a << " * " << b << " = " << nhan(a, b);
            break;
        case '4':
            cout << a << " / " << b << " = " << chia(a, b);
            break;
        default:
            cout << "Phep tinh khong hop le.";
            break;
        }

        cout << "\nTiep tuc (C/K): ";
        cin >> c;
        if(tolower(c) != 'c') cont = false;
    }

    system("pause");
    return 0;
}

void menu()
{
    cout << "1. Cong\n";
    cout << "2. Tru\n";
    cout << "3. Nhan\n";
    cout << "4. Chia\n";
}

int cong(int a, int b)
{
    return a + b;
}
int tru(int a, int b)
{
    return a - b;
}
double nhan(int a, int b)
{
    return a * b;
}
double chia(int a, int b)
{
    return a * 1.0 / b;
}