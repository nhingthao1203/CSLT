#include <iostream>
#define MAXSIZE 40
using namespace std;

//FUNCTION  PROTOTYPE 
void nhap (int a[],int &n);
void xuat (int a[],int n);

int main()
{
    
    int a[MAXSIZE],n,k;
    bool checkInp=false;
    do
    {
        cout <<"Luu chon thao tac voi mang"
            <<"\n1.Nhap mang"
            <<"\n2.Xuat mang"
            <<"\n12.Thoat chuong trinh";
        cin >>k;
        switch (k)
        {
            case 1:
            {
                nhap (a,n);
                checkInp =true;
                break;
            }
            case 2:
            {
                if(checkInp)
                {
                    cout <<"\nMang:";
                    xuat(a,n);
                }
                else cout <<"\nBan chua nhap mang, nhap mang vao";
                break;
            }
            default:
                cout <<"\nThoat chuong trinh";
        }
        system ("pause");
        
    } while (k>=1 && k<=11);

}
//definitions 
void nhap (int a[], int &n)
{
    cout <<"\nNhap vao phan tu cua mang:";
    do 
    {
        cin >>n;
        if(n<=0||n>MAXSIZE)
        cout <<"Nhap sai! Nhap lai.";
    }while (n<=0||n>MAXSIZE);
    cout << "\nNhap "<< n <<" so nguyen:";
    for (int i=0;i<n;i++)
    cin >>a[i];
}