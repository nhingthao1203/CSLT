#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long bin;
    int dec = 0, p = 0;
    cout << "Nhap so he nhi phan can chuyen doi: ";
    cin >> bin;

    while (bin > 0)
    {
        dec += (bin % 10) * pow(2, p);
        p++;
        bin /= 10;
    }

    cout << "So he thap phan la: " << dec << endl;
    system("pause");
    return 0;
}