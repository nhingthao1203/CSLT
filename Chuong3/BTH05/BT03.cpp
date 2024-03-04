#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double s1 = 0, s2 = 0, s3 = 0;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if (n <= 0)
            cout << "Khong hop le.\n";
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        s1 += pow(i * 1.0, 2);
        s2 += 1 / (1.0 *i);
        s3 += 1 / ((double)(2 * i - 1));
    }
        
    cout << "a. S1 = " << s1 << endl;
    cout << "b. S2 = " << s2 << endl;
    cout << "c. S3 = " << s3 << endl;
    system("pause");
    return 0;
}