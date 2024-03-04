#include<iostream>
using namespace std;

int main(){
    int a[100];
    int n, min;
    cout << "Nhap n(n>0 va n<=100): ";
    cin >> n;
    while ( n <= 0 || n > 100 )
    {
        cout << "Ban nhap n khong thoa yc, moi nhap lai:";
        cin >> n;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min)
        min =a[i];
    }
    cout << "So nho nhat trong mang la: "<< min << endl;
    system("pause");
    return 0;
}