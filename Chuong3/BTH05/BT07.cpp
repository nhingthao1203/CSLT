#include <iostream>

using namespace std;

int main()
{
    int h;
    do
    {
        cout << "Nhap chieu cao tam giac: ";
        cin >> h;
        if (h <= 0)
            cout << "Khong hop le!" << endl;    
    } while (h <= 0);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }    
    
    system("pause");
    return 0;
}