#include <iostream>

using namespace std;

int main()
{
    int mth, yr;
    cout << "Nhap thang: ";
    do
    {   
        cin >> mth;
        if(mth < 1 || mth > 12) cout << "Thang khong hop le. Moi nhap lai: ";
    } while (mth < 1 || mth > 12);
    cout << "Nhap nam: ";
    do
    {
        cin >> yr;
        if(yr < 1) cout << "Nam khong hop le. Moi nhap lai: ";
    } while (yr < 1);


    cout << "So ngay cua thang " << mth << " nam " << yr << " la: ";
    if (mth == 2)
    {
        if (yr % 400 || (yr % 4 == 0 && yr % 100 != 0))
            cout << "29 ngay.\n";
        else cout << "28 ngay.\n";
    } 
    else if(mth == 4 || mth == 6 || mth == 9 || mth == 11)
        cout << "30 ngay.\n";
    else cout << "31 ngay.\n";
    
    system("pause");
    return 0;
}
