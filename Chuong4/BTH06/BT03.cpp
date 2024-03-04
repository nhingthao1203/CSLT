#include <iostream>

using namespace std;

double tinhLuyThua(double x, int y)
{
    double result = 1;
    if(y > 0)
        for(int i = 1; i <= y; i++)
            result *= x;
    else if(y < 0)
        for(int j = 1; j <= -y; j++)
            result /= x;
    return result;     
}

int main()
{
    double coSo;
    int soMu;

    cout << "Nhap co so: ";
    cin >> coSo;
    cout << "Nhap so mu: ";
    cin >> soMu;

    cout << coSo << "^" << soMu << " = " << tinhLuyThua(coSo, soMu) << endl;
    system("pause");
    return 0;
}