#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha[50];
    for (int i = 0; i < 50; i++) 
    {
        if (i < 25) 
            alpha[i] = pow (i * 1.0, 2);
        else 
            alpha[i] = pow (i * 1.0, 3);
        cout << alpha[i] << " ";
        if(i % 10 == 9) 
            cout << endl;
    }

    system ("pause");
    return 0;
}