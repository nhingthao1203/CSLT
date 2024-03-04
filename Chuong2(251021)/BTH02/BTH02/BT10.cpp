#include <iostream>

using namespace std;

int main() 
{
    char kytu;
    int num;

    cout << "Nhap vao mot ky tu: ";
    cin >> kytu;
    cout << (int) kytu << endl;

    do
    {
        cout << "Nhap vao mot so nguyen (1..255): ";
        cin >> num;
        cout <<"ky tu tuong ung: " << (char) num << endl;
    } while (num < 1 || num > 255);
    
    system("pause");
    return 0;
}