#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    int rev = 0;
    int count1 = 0;
    int count2 = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Khong hop le. Moi nhap lai: ";
        cin >> n;
    }

    while (n > 0)
    {
        count1++;
        temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }

    while (rev > 0)
    {
        count2++;
        temp = rev % 10;
        cout << temp << " ";
        rev /= 10;
    }
    if (count1 > count2) 
    {
        for (int i=0; i<=(count1 - count2); i++)
        cout << "0 ";
    }
    
    cout << endl;
    system("pause");
    return 0;
}