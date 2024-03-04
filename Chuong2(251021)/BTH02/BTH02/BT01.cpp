#include <iostream>

using namespace std;

int main() 
{
    double canh_hv = 0;
    
    do
    {
        cout << "Nhap canh cua hinh vuong: ";
        cin >> canh_hv;
    } while (canh_hv <= 0);
    
    cout << "Dien tich hinh vuong = " << canh_hv*canh_hv << endl;
    system("pause");
    return 0;
}