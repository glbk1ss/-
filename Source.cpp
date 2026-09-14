#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	double x, f;

	cout << "Введите значение аргумента x:"; cin >> x;
	f = x * x * x + 2.5 * x * x - 1.2;
	cout << "f(" << x << ")=" << f << endl;
	return 0;

}