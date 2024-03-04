#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap 1 so nguyen: ";
    cin >> n;

    if(n == 0) cout << n << " la so 0.\n";
    else if(n > 0) cout << n << " la so duong.\n";
    else cout << n << " la so am.\n";
    
    system("pause");
    return 0;
}