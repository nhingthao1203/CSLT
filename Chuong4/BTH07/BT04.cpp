#include <iostream>
#include <string>

using namespace std;

bool isNum(char);
bool isChar(char);

int main()
{
    string a;
    int countNum = 0, countChar = 0;
    cout << "Nhap vao chuoi bat ky: ";
    getline(cin, a);

    for(int i = 0; i < a.length(); i++)
        if(isChar(a[i])) countChar++;
        else if(isNum(a[i])) countNum++;
    
    cout << "Chuoi co chua " << countNum << " ky tu so.\n";
    cout << "Chuoi co chua " << countChar << " ky tu chu.\n";
    system("pause");
    return 0;
}

bool isNum(char a)
{
    bool result = false;
    if(a >= '0' && a <= '9')
        result = true;
    return result;
}

bool isChar(char a)
{
    bool result = false;
    if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z'))
        result = true;
    return result;
}