#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);
    cout << "Do dai chuoi la: " << chuoi.length() << endl;

    system("pause");
    return 0;
}