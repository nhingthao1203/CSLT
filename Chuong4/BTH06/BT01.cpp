#include <iostream>

using namespace std;

double dienTich(double, double);
double chuVi(double, double);

int main()
{
    double d, r;
    do
    {
        cout << "Nhap chieu dai va rong hinh chu nhat: ";
        cin >> d >> r;
        if(d <= 0 || r <= 0) cout << "Nhap sai. Nhap lai!!!\n";
    } while(d <= 0 || r <= 0);

    cout << "a. Dien tich hinh chu nhat la: " << dienTich(d,r) << endl;
    cout << "b. Chu vi hinh chu nhat la: " << chuVi(d, r) << endl;
    system("pause");
    return 0;
}

double dienTich(double cDai, double cRong)
{
    return cDai * cRong;
}
double chuVi(double cDai, double cRong)
{
    return (cDai + cRong) * 2;
}