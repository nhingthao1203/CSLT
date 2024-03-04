#include <iostream>

using namespace std;

int main()
{
    int yr;
    cout << "Nhap nam: ";
    cin >> yr;
    while(yr <= 0)
    {
        cout << "Nam khong hop le. Moi nhap lai: ";
        cin >> yr;
    }

    if(yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
        cout << yr << " la nam nhuan.\n";
    else cout << yr << " la nam khong nhuan.\n";

    system("pause");
    return 0;
}