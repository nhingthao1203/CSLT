#include <iostream>

using namespace std;

int main()
{
    int n, t, temp, sum = 0, count = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    while (n < 0)
    {
        cout << "Khong hop le. Nhap lai: ";
        cin >> n;
    }    
    t = n;

    while (t > 0)
    {
        temp = t % 10;
        t /= 10;
        sum += temp;
        count++;
    }

    cout << n << " co " << count << " chu so.\n";
    cout << "Tong cac chu so la: " << sum << endl;
    system("pause");
    return 0;
}