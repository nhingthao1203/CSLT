#include <iostream>
using namespace std;
// chua xu ly duoc so lon 
int main() 
{
    long num, temp;
    int  sum = 0, rev = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> num;

    while (num > 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
        sum += temp;
    }
    
    cout << "Tong cac chu so la: " << sum << endl;
    cout << "So dao nguoc la: " << rev << endl;

    system("pause");
    return 0;
}