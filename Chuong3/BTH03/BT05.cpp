#include <iostream>

using namespace std;

int main()
{
    float grades;
    cout << "Nhap diem tich luy cua sinh vien: ";
    cin >> grades;
    while (grades < 0 || grades > 10)
    {
        cout << "Diem khong hop le. Moi nhap lai: ";
        cin >> grades;
    }

    cout << "Xep loai: ";

    if(grades >= 9)
        cout << "Xuat xac\n";
        else if(grades >= 8)
            cout << "Gioi\n";
            else if(grades >= 7)
                cout << "Kha\n";
                else if(grades >= 6)
                    cout << "Trung binh kha\n";
                    else if(grades >= 5)
                        cout << "Trung binh\n";
                        else 
                            cout << "Yeu\n";

    system("pause");
    return 0;
}