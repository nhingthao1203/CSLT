#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Nhap so thu nhat: ";
    cin >> n1;
    cout << "Nhap so thu hai: ";
    cin >> n2;

    if(n1 > n2)
        cout << "So thu nhat lon hon.\n";
    else if(n1 < n2)
        cout << "So thu nhat nho hon.\n";
    else 
        cout << "Hai so bang nhau.\n";

    system("pause");
    return 0;
}