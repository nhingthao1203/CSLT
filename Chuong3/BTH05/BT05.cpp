#include <iostream>

using namespace std;

int main()
{
    int n1, n2, count = 0;
    do
    {
        cout << "Nhap so nguyen duong n1 va n2 (n1 < n2): ";
        cin >> n1 >> n2;
        if (n1 <= 0 || n1 >= n2)
            cout << "Khong hop le.\n";
    } while (n1 <= 0 || n1 >= n2);

    for (int i = n1; i <= n2; i++)
    {
        if (i == 1) continue;

        int dem = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0) dem++;
        if (dem == 2) count++;
    }
    
    cout << "Tu " << n1 << " toi " << n2 << " co " << count << " so nguyen to."<< endl;
    system("pause");
    return 0;
}