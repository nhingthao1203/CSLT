#include <iostream>
//#include <math>
using namespace std;
int main()
{
	float a,b,c,tam;
	cout<< "nhap a=\n";
	cin >> a;
	cout << "nhap b=\n";
	cin >> b;
	cout << "nhap c=\n";
	cin >> c;
	if(a>b)
	{
		tam=a;
		a=b;
		b=tam;
	}
	if(a>c)
	{
		tam=a;
		a=c;
		c=tam;
	}
	if(b>c)
	{
		tam=b;
		b=c;
		c=tam;
	}
	cout<<"so thu tu tang dan:  "<<a<<" "<<b<<" "<<c<<endl;
	system("pause");
}