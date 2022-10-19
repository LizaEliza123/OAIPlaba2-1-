#include<iostream>
using namespace std;
int main()
{
	double a, b;
	setlocale(LC_ALL, "");
	cout << "Введите a= ";
	cin >> a;
	cout << "Введите b= ";
	cin >> b;
	cout << "a-b=" << a - b << endl;
	cout << "a/b=" << a / b << endl;
}