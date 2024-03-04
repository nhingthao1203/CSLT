#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
    string name;
    double cong1Ngay, soNgayLam;

    
    cout << "Nhap ten: ";
    getline(cin, name);
     
    do
    {
        cout << "Nhap so ngay lam viec: ";
        cin >> soNgayLam;
    } while (soNgayLam < 0);
    
    do
    {
        cout << "Nhap so tien cong 1 ngay: ";
        cin >> cong1Ngay;
    } while (cong1Ngay <= 0);
    

    cout << "Ho va ten cua ban la: "<< name <<endl;
    cout << "Tong tien luong: " << fixed << setprecision(0) << cong1Ngay * soNgayLam << endl;
    system("pause");
    return 0;  
}