#include <iostream>

using namespace std;

int main()
{
    int n, reslt;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if (n < 0)
            cout << "Khong hop le.\n";
    } while (n < 0);

    for (int i = 1; i <= 10; i++)
    {
        reslt = n * i;
        cout << n << " * " << i << " = " << reslt << endl;
    }
    
    system("pause");
    return 0;
}