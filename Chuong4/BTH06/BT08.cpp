#include <iostream>

using namespace std;

int cvS(int);
int dtS(int);
void drawS(int);

int main()
{
    int c;
    do
    {
        cout << "Nhap canh hinh vuong: ";
        cin >> c;
        if(c <= 0) cout << "Nhap sai! Nhap lai.\n";
    } while(c <= 0);

    cout << "a. Chu vi hinh vuong la: " << cvS(c) << endl;
    cout << "b. Dien tich hinh vuong la: " << dtS(c) << endl;
    cout << "c. Hinh vuong co canh bang " << c << " : " << endl;
    drawS(c);
    system("pause");
    return 0;
}

int cvS(int a)
{
    return a * 4;
}

int dtS(int a)
{
    return a * a;
}

void drawS(int a)
{
    for(int i = 1; i <= a; i++)
    {
        cout << "\t";
        for(int j = 1; j <= a; j++)
            if(i == 1 ||i == a ||j == 1 ||j == a)
                cout << "*";
            else cout << " ";
        cout << endl;
    }
}