#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen a, b: ";
    cin >> a >> b;

    //  return a>b?a:b;    
    if(a > b) cout << a << " la so lon nhat.\n";
    else cout << b << " la so lon nhat.\n";

    system("pause");
    return 0;
}