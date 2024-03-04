#include <iostream>

using namespace std;

int main()
{
    int mth;
    cout << "Nhap thang: ";
    do
    {   
        cin >> mth;
        if(mth < 1 || mth > 12) cout << "Thang khong hop le. Moi nhap lai: ";
    } while (mth < 1 || mth > 12);
 

    cout << "So ngay cua thang " << mth << " la: ";
    if (mth == 2)
    {
        cout << "28 hoac 29 ngay.\n";
    } 
    else if(mth == 4 || mth == 6 || mth == 9 || mth == 11)
        cout << "30 ngay.\n";
    else cout << "31 ngay.\n";
    
    system("pause");
    return 0;
}
