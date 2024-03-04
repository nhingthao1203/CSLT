#include <iostream>

using namespace std;

int main()
{
    int n1, n2, count = 0;
    cout << "Nhap vao 2 so nguyen duong (n1 < n2): ";
    cin >> n1 >> n2;
    while (n1 <= 0 || n2 <= 0)
    {
        cout << "Khong hop le. Moi nhap lai: ";
        cin >> n1 >> n2;
    }

    if (n1 > n2) // dua ve n1 < n2
    {
        n1 += n2;
        n2 = n1 - n2;
        n1 -= n2;
    }
    
    for (int i = n1; i <= n2; i++)
    {
        if (10 % i == 0) count++;
    }

    cout << "Tren doan tu " << n1 << " den " << n2;
    cout << " so uoc cua 10 la: " << count << endl;
    system("pause");
    return 0;
}