#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int cntC = 0, cntL = 0, cnt10 = 0;
    do
    {
        cout << "Nhap so nguyen duong n1 va n2 (n1 < n2): ";
        cin >> n1 >> n2;
        if (n1 <= 0 || n1 >= n2)
            cout << "Khong hop le.\n";
    } while (n1 <= 0 || n1 >= n2);
    
    for (int i = n1; i <= n2; i++)
    {
        if (10 % i == 0) cnt10++;
        if (i % 2 == 0) cntC++;
        else cntL++;
    }

    cout << "Tren doan tu " << n1 << " den " << n2 << " co: \n";
    cout << "\t" << cntC << " so chan.\n";
    cout << "\t" << cntL << " so le.\n";
    cout << "\tSo uoc cua 10 la: " << cnt10 << endl;
    system("pause");
    return 0;
}