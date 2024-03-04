#include <iostream>

using namespace std;

int main()
{
    int c;
    do
    {
        cout << "Nhap chieu dai canh hinh vuong: ";
        cin >> c;
        if (c < 0)
            cout << "Khong hop le.\n";
    } while (c < 0);

    cout << "a. Hinh vuong voi c = " << c << endl;
    for (int i = 1; i <= c; i++)
    {
        cout << "\t";
        for (int j = 1; j <= c; j++)
            cout << "*";
        cout << endl;
    }

    cout << "b. Hinh vuong voi c = " << c << endl;
    for (int i = 1; i <= c; i++)
    {
        cout << "\t";
        for (int j = 1; j <= c; j++)
            if (i == 1||i == c||j == 1||j == c) cout << "*";
            else cout << " ";
        cout << endl;
    }

    system("pause");
    return 0;
}