#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a[50];
    int n,k;
    cout << "Nhap n(n>0 va n<=50): ";
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
    cout <<"Nhap dang toan ban muon kiem tra" << endl;
    cout <<"1. Kiem tra mang co so chinh phuong hay khong va co bao nhieu so chinh phuong:"<< endl;
    cout <<"2. Mang co bao nhieu so nguyen to"<<endl;
    cout <<"3. Dua ra vi tri cuoi cung xuat hien so hoan hao"<<endl;
    cout <<"4. Kiem tra mang co doi xung hay khong"<<endl;
    cout <<"5. Co bao nhieu so chinh phuong:"<<endl;
    cout <<"Dang toan ban chon la: ";
    cin >> k;
    while (k <=0 || k > 5 )
    {
        cout <<"Khong ton tai phep tinh nay moi nhap lai: ";
        cin >> k;
    }
    switch (k)
    {
        case 1: 
        {
            bool kt = true;
            //int dem = 0;
            for (int i = 0; i < n; i++ )
            if (sqrt(a[i])*sqrt(a[i])==a[i])
            {    
                //if (kt == true)
                cout <<"Mang co so chinh phuong"<< endl;
                kt = false;
                break;
                //dem ++;
            }   
            //cout <<"Mang co " << dem <<" so chinh phuong."<< endl;
            if (kt == true) 
            {
                cout <<"Mang khong co so chinh phuong"<< endl;
                break;
            }
            //break;
        }
        case 2: 
        {
            int dem = 0;
            bool kt = true;
            for (int i = 0; i < n; i++)
            {
                for (int j = 2; j <= sqrt(a[i]); j++)
                {
                    if (a[i] > 1 && a[i] <= 3) kt = true;
                    else 
                    if(a[i] % j == 0)
                    {
                        kt = false;
                        break;
                    }
                }
                if (kt == true)
                dem++;
                kt = true;
            }
            if( dem != 0)
                {
                    cout <<"Mang co "<< dem <<" so nguyen to."<< endl;
                    break;
                }
            else 
                {
                    cout <<"Mang khong co so nguyen to"<<endl;
                    break;
                }
        }
        case 3: 
        {
            int sum = 0;

            for (int i = n-1; i >= 0; i--)
            {
                for (int j = 1; j <= a[i]/2; j++)
                {
                    if(a[i] % j == 0)
                    sum +=j;
                    
                }
                if (sum == a[i]) 
                {
                    cout <<"Vi tri xuat hien so hoan hao cuoi cung la: "<< i <<endl;
                    exit(1);
                }
                sum = 0;
            }
            cout <<"Khong xuat hien so hoan hao"<< endl;
            break;
        }
        case 4: 
        {
            int dem=0;
            for(int i = 0; i < n; i++)
            {
                if(a[i]!=a[n-1-i])
                dem++;
            }
            if (dem == 0) 
            {
                cout <<"Mang doi xung"<< endl;
                break;
            }
            else 
            {    
                cout <<"Mang khong doi xung"<< endl;
                break;
            }
        }
        case 5:
        {
            bool kt = true;
            int dem = 0;
            for (int i = 0; i < n; i++ )
            if (sqrt(a[i])*sqrt(a[i])==a[i])
                dem ++;  
            cout <<"Mang co " << dem <<" so chinh phuong."<< endl;
            break; 
        }
        
    }
    system("pause");
    return 0;
}