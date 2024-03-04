#include <iostream>

using namespace std;

bool namNhuan(int a)
{
    if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
        return true;
    else return false;
}

int main()
{
    int yr;
    do 
    {
        cout << "Nhap nam: ";
        cin >> yr;
        if(yr <= 0)
            cout << "Khong hop le. Nhap lai.\n";
    } while(yr <= 0);

    cout << "Nam " << yr;
    if(namNhuan(yr)) cout << " la nam nhuan.\n";
    else cout << " la nam khong nhuan.\n";
    system("pause");
    return 0;
}