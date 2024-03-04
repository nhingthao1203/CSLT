#include <iostream>

using namespace std;

int main()
{
    int h;
    do
    {
        cout << "Nhap chieu cao tam giac: ";
        cin >> h;
        if (h < 0)
            cout << "Khong hop le.\n";
    } while (h < 0); 

    cout << "a. Tam giac voi h = " << h << " : \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= i; j++)
            if (i == 1||i == j||i == h||j == 1) cout << "*";
            else cout << " ";
        cout << endl;
    }

    cout << "b. Tam giac voi h = " << h << " : \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= h; j++)
            if (j <= (h - i)) cout << " ";
            else cout << "*";
        cout << endl;
    }

    cout << "c. Tam giac voi h = " << h << " : \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= h; j++)
            if (j <= (h - i + 1)) cout << "*";
            else cout << " ";
        cout << endl;
    }
    
    cout << "d. Tam giac voi h = " << h << " : \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= h; j++)
            if (j < i) cout << " ";
            else cout << "*";
        cout << endl;
    }


    cout << "e. Tam giac voi h = " << h << " : \n";
    cout << "Cach 1: \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= h; j++)
            if (j <= (h - i)) cout << " ";
            else cout << "* ";
        cout << endl;
    }
    cout << "Cach 2: \n";
    for (int i = 1; i <= h; i++)
    {
        cout << "\t";
        for (int j = 1; j <= (2 * i - 1) + (h - i); j++)
        {
            if (j <= (h - i)) cout << " ";
            else cout << "*";
        }
        cout << endl;
    } 

    system("pause");
    return 0;
}