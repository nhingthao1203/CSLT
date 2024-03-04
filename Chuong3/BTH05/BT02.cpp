#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0;
    do
    {
        cout << "Ban can nhap bao nhieu so: ";
        cin >> m;
        if (m <= 0)
            cout << "Khong hop le.\n";
    } while (m <= 0);

    for (int i = 1; i <= m; i++)
    {
        cout << "Nhap so thu " << i << " : ";
        cin >> n;
        sum += n;
    }
    
    cout << "Tong " << m << " so vua nhap la: " << sum << endl;
    system("pause");
    return 0;
}