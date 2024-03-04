#include <iostream>

using namespace std;

int main()
{
    float dtb;
    cout << "Nhap diem trung binh cua sinh vien: ";
    cin >> dtb;
   /* } while (dtb < 0 || dtb > 10)
    {
        cout << "Diem khong hop le. Moi nhap lai: ";
        cin >> dtb;
    }*/
    if (dtb < 0 || dtb > 10)
    {
        cout << "Diem khong hop le.";
        exit(1);
    }
    else
        if (dtb >= 5 && dtb<=10) 
        {
            cout << "Dau\n";
        }
        else
            cout << "Rot\n";
    system("pause");
    return 0;
}