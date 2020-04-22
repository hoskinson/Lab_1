#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "\nВведите первое число : ";
	cin >> a;
	cout << "\nВведите второе число : ";
	cin >> b;
	c = a + b;
	cout << "\nсумма : " << c;


	return 0;
}

