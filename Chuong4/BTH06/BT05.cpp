#include <iostream>

using namespace std;

void drawSquare(int a)
{
    for(int i = 1; i <= a; i++)
    {
        cout << "\t\t";
        for(int j = 1; j <= a; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int c;
    cout << "Nhap canh hinh vuong: ";
    cin >> c;
    drawSquare(c);
    system("pause");
    return 0;
}