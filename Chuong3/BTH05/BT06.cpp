#include <iostream>

using namespace std;

int main()
{
    int d, r;
    do
    {
        cout << "Nhap chieu dai va chieu rong cua hinh chu nhat: ";
        cin >> d >> r;
        if (d <= 0 || r <= 0)
            cout << "Khong hop le!" << endl;    
    } while (d <= 0 || r <= 0);

    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= r; j++)
            cout << "*";
        cout << endl;
    }
    
    system("pause");
    return 0;
}