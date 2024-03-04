#include<iostream>
using namespace std;

int main(){
    int a[50];
    int n;
    cout << "Nhap n(n>0 va n<50): ";
    cin >> n;
    while ( n < 0 || n > 50 )
    {
        cout << "Ban nhap n khong thoa yc, moi nhap lai:";
        cin >> n;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu a[" << i << "] : ";
        cout << a[i] << endl;
    }
    system("pause");
    return 0;
}