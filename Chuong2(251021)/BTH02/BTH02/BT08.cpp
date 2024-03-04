#include <iostream>

using namespace std;

int main() 
{
    double buyP, sellP;
    const double EXT = 0.6;

    cout << "Nhap gia mua cua mat hang: ";
    cin >> buyP;
    sellP = buyP * (1 + EXT);
    cout << "Gia ban cua mat hang la: " << sellP << endl;

    system("pause");
    return 0;    
}