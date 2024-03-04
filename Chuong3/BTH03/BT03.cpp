#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;

    if(n < 0) 
        cout << "|" << n << "| = " << -n << endl;
    else 
        cout << "|" << n << "| = " << n << endl;
    system("pause");
    return 0;
}