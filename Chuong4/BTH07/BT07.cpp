#include <iostream>
#include <string>

using namespace std;

bool isUpper(char);
bool isLower(char);

int main()
{
    string a;
    int countUpper = 0, countLower = 0;
    cout << "Nhap vao chuoi bat ky: ";
    getline(cin, a);

    for(int i = 0; i < a.length(); i++)
        if(isLower(a[i])) countLower++;
        else if(isUpper(a[i])) countUpper++;
    
    cout << "Chuoi co chua " << countUpper << " ky tu in hoa.\n";
    cout << "Chuoi co chua " << countLower << " ky tu in thuong.\n";
    system("pause");
    return 0;
}

bool isUpper(char a)
{
    bool result = false;
    if(a >= 'A' && a <= 'Z')
        result = true;
    return result;
}

bool isLower(char a)
{
    bool result = false;
    if(a >= 'a' && a <= 'z')
        result = true;
    return result;
}