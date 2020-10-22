#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
		break;
	case '-':
		hieu = a-b;
		cout<<"hieu la: " <<hieu;
		break;
	case '*':
		tich=a*b;
		cout<<"tich la: "<<tich;
		break;
	case '/':
		thuong = a/b;
		cout<< "thuong la: "<<thuong;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}