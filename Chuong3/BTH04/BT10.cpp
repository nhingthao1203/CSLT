#include <iostream>

using namespace std;

int main()
{
    int n, tam, count = 0;
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Khong hop le. Moi nhap lai: ";
        cin >> n;
    }

    cout << "Cac gia tri thua so nguyen to cua " << n << " la: ";
    for (int i = 2; i <= n; i++)
    {   
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
            i = 1;
        }
    }
       
    cout << endl;
    system("pause");
    return 0;
}