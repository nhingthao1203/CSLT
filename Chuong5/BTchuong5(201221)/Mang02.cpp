#include<iostream>
using namespace std;

int main(){
    int a[100];
    int n, kt;
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
    kt = 1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2==0) 
        {
            cout << "Mang co so chan" << endl;
            kt = 0;
            //break; 
            exit(0);
            
        }
    }
    //if(kt == 1 ) 
    //{
    cout << "Mang khong co so chan"<< endl;
   // }
    system("pause");
    return 0;
}