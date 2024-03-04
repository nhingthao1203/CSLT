#include<iostream>
#define MAXSIZE 100
using namespace std;
// function prototype
void nhap (int a[], int &n);
void xuat (int a[], int n);
int checkZero (int a[], int n);
void timMang (int a[], int n);
void soAm(int a[], int n);
void xuatMang (int a[], int n);
void Add (int a[], int &n, int b, int c);
void Delete (int a[], int &n);
void swap (int &l, int &m );
void sapXep (int a[], int n);
void chanTangLeGiam (int a[], int n);
void saoChep (int a[], int n);

int main()
{
    int a[MAXSIZE], n, k;
    bool checkInp = false;
    do
    {
        cout <<"Luu chon thao tac voi mang\n"
             <<"1. Nhap mang\n"
             <<"2. Xuat mang\n"
             <<"3. Kiem tra mang co so 0\n"
             <<"4. Tim doan\n"
             <<"5. Xuat gia tri am cua mang\n"
             <<"6. Xuat gia tri nam trong mang cho truoc\n"
             <<"7. Them mot phan tu vao mang\n"
             <<"8. Xoa mot phan tu khoi mang\n"
             <<"9. Sap xep mang tang dan\n"
             <<"10. Sap chan tang le giam\n"
             <<"11. Sao chep\n"
             <<"12. Thoat\n"
             <<"Ban chon:\n";
        cin >> k;
        switch (k) 
        {
            case 1:
                nhap (a,n);
                checkInp = true;
                break;
            case 2:
                if (checkInp)
                {
                    cout <<"Mang:\n";
                    xuat (a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 3:
            if (checkInp)
                {
                    if (checkZero(a,n) == 0)
                        cout <<"Mang khong co so khong\n";
                    else 
                        cout <<"Mang co ton tai so khong\n";
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 4:
            if (checkInp)
                {
                    timMang(a,n);
                    
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 5:
            if (checkInp)
                {
                    soAm (a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 6:
            if (checkInp)
                {
                    xuatMang(a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 7:
            if (checkInp)
            {
                int b,c;
                if (n >= MAXSIZE)
                    {
                        cout <<"Mang khong the them duoc nua\n";
                        break;
                    }
                else
                    {
                    cout << "Ban muon them gia tri nao?\n";
                    cin >> b;
                    n++;
                    do
                    {
                        cout << "Vi tri can them:";
                        cin >> c;
                    }while (c < 0 && c >= n);
                    Add (a,n,b,c);
                    }
            }    
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 8:
            if (checkInp)
                {
                    Delete(a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 9:
            if (checkInp)
                {
                    sapXep(a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 10:
            if (checkInp)
                {
                    chanTangLeGiam(a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!";
                break;
            case 11:
            if (checkInp)
                {
                    saoChep(a,n);
                }
                else 
                    cout << "Ban chua nhap mang, nhap mang vao!\n";
                break;
            default:
                cout << "Thoat chuong trinh\n";
        } 
        system("pause");
    }while (k >= 1 && k <=11);
}
//definition 
void swap (int &l, int &m)
{
    int tam = l;
    l = m;
    m = tam;
}
void nhap (int a[], int &n)
{
    cout <<"Nhap phan tu cua mang: ";
    do
    {
        cin >> n;
        if (n <= 0 || n > MAXSIZE)
        cout << "Nhap sai, hay nhap lai: ";
    } while (n <= 0 || n > MAXSIZE);
    cout << "Nhap " << n <<" so nguyen\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void xuat (int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int checkZero (int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] == 0) 
            return 1; 
    return 0;
}
void timMang (int a[], int n)
{
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) 
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout <<"Tim duoc mang [" << min <<"," << max <<"] chua tat ca gia tri cua mang hien tai.\n";
}
void soAm (int a[], int n)
{
    bool kt = false;
    for (int i = 0; i < n; i++)
    if (a[i] < 0)
    {
        kt = true;
        cout << a[i] <<" ";
    }
    if (kt == false)
        cout << "Mang khong co so am\n"; 
    cout << endl;
}
void xuatMang (int a[], int n)
{
    int b, c;
    cout << "Nhap vao doan [x,y]: ";
    cin >> b >> c;
    cout << "Cac so thuc thuoc [x,y]: ";
    for (int i = 0; i < n; i++)
        if (a[i] >= b && a[i] <= c)
        cout << a[i] << " ";
    cout << endl;
}
void Add (int a[], int &n, int b, int c)
{   
    int tam;
        for (int i = 0; i < n; i++)
            if (i >= c) 
                {
                    tam = a[i];
                    a[i] = b;
                    b = tam;
                }
}
void Delete (int a[], int &n)
{
    int b;
     cout << "Vi tri ban muon xoa:";
    do
    {
       
        cin >> b;
        cout << endl;
    } while (b <= 0 && b >= n);
    for (int i = 0; i < n; i++)
        {
            if (i >= b)
                a[i] = a[i+1];
            //cout << a[i] << " ";
        }
        n--;
        cout << endl;
    
}
void sapXep (int a[], int n)
{
    int tam;
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            swap (a[i], a[j]);
        }
    /*cout << "Mang tang dan: ";
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    cout << endl;*/
}
void chanTangLeGiam (int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
        if(a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
            swap (a[i], a[j]);
        else if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j])
            swap (a[i], a[j]);
}
void saoChep (int a[], int n)
{
    int b[MAXSIZE], c[MAXSIZE];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
        {
            x++;
            b[x-1] = a[i];
        }
        else 
            if (a[i] < 0)
            {
                 y++;
                c[y-1] = a[i];
            }
        
    }
    if (x != 0)
    {
        cout <<"Mang b:\n";
        for (int i = 0; i < x; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    else 
        cout << "Mang b khong co so duong!\n";
    if (y != 0)
    {
        cout <<"Mang c:\n";
        for (int i = 0; i < y; i++)
            cout << c[i] << " ";
        cout << endl;
    }
    else 
        cout << "Mang c khong co so am!\n";
}
