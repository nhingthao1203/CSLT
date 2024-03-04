#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap 1 so nguyen: ";
    cin >> n;

    if (n % 2 == 0) 
        cout << n << " la so chan.\n";
    else 
        cout << n << " la so le.\n";
    
    system("pause");
    return 0;
}