#include <iostream>

using namespace std;

bool palind(int n)
{
    int num, revN = 0, temp;
    temp = n;
    while(temp > 0)
    {
        num = temp % 10;
        revN = revN * 10 + num;
        temp /= 10;
    }
    if(revN == n) 
        return true;
    else return false;
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen: ";
    cin >> n;

    if(palind(n))
        cout << n << " la so doi xung.\n";
    else cout << n << " khong phai la so doi xung.\n";

    system("pause");
    return 0;
}