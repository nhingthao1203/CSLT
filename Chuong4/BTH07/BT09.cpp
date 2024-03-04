#include <iostream>

using namespace std;

bool namNhuan(int nam);
int ngayTrongThang(int thang, int nam);
bool ngayHopLe(int ngay, int thang, int nam);
int cachNgayDauNam(int ngay, int thang, int nam);
void ngayTruoc(int ngay, int thang, int nam);
void ngaySau(int ngay, int thang, int nam);

int main()
{
    int ngay, thang, nam;
    do 
    {
        cout << "Nhap ngay: "; cin >> ngay;
        cout << "Nhap thang: "; cin >> thang;
        cout << "Nhap nam: "; cin >> nam;
        if(ngay <= 0 || thang <= 0 || nam <= 0 || !ngayHopLe(ngay, thang, nam))
            cout << "Khong hop le! Nhap lai.\n";
    } while(ngay <= 0 || thang <= 0 || nam <= 0 || !ngayHopLe(ngay, thang, nam));

    cout << "Ngay " << ngay << "/" << thang << "/" << nam << " ";
    cout << "cach ngay dau tien trong nam " << cachNgayDauNam(ngay, thang, nam) << " ngay.\n";
    ngaySau(ngay, thang, nam);
    ngayTruoc(ngay, thang, nam);
    system("pause");
    return 0;
}

bool namNhuan(int nam)
{
    if(nam % 400 == 0||(nam % 4 == 0 && nam % 100 != 0))
        return true;
    else return false;
}

int ngayTrongThang(int thang, int nam)
{
    if(thang == 2)
        if(namNhuan(nam)) return 29;
        else return 28;
    else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;
    else return 31;
}

bool ngayHopLe(int ngay, int thang, int nam)
{
    if(ngay <= ngayTrongThang(thang, nam)) 
        return true;
    else return false;
}

int cachNgayDauNam(int ngay, int thang, int nam)
{
    int count = ngay;
    for(int i = 1; i < thang; i++)
        count += ngayTrongThang(i, nam);
    return count;
}
void ngaySau(int ngay, int thang, int nam)
{
    if(ngay < ngayTrongThang(thang, nam)) cout<<"Ngay sau: "<< ngay+1 <<"/"<< thang <<"/"<< nam<<endl;
    else 
        if(ngay == ngayTrongThang(thang, nam))
            if (thang == 12)
            cout<<"Ngay sau: "<< 1 <<"/"<< 1 <<"/"<< nam+1 <<endl;
            else 
            cout<<"Ngay sau: "<< 1 <<"/"<< thang+1 <<"/"<< nam <<endl;
}
void ngayTruoc(int ngay, int thang, int nam)
{
    if (1 < ngay && ngay <= ngayTrongThang(thang, nam))
    cout <<"Ngay truoc: "<< ngay - 1 <<"/"<< thang <<"/"<< nam <<endl;
    else 
        if (ngay == 1)
            if(thang == 1)
                cout <<"Ngay truoc: "<< ngayTrongThang(12, nam-1) <<"/2"<< "/"<< nam -1<<endl;
            else 
                cout <<"Ngay truoc: "<< ngayTrongThang(thang-1, nam)<<"/"<< thang-1 <<"/"<< nam << endl;

}