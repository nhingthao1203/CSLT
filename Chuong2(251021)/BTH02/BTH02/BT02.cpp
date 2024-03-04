#include <iostream>

using namespace std;

int main() 
{
    double cDai, cRong;

    do
    {
        cout << "Nhap chieu dai hinh chu nhat: ";
        cin >> cDai;
    } while (cDai <= 0);
    do
    {
        cout << "Nhap chieu rong hinh chu nhat: ";
        cin >> cRong;
    } while (cRong <= 0);

    cout << "Dien tich hinh chu nhat = " << cDai * cRong << endl;
    system("pause");
    return 0;
}