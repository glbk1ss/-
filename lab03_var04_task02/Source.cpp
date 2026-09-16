#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	double x1, y1, x2, y2, x3, y3, S;


	cout << "Введите координату вершины треугольника x1:";cin >> x1; 
	cout << "Введите координату вершины треугольника y1:";cin >> y1;
	cout << "Введите координату вершины треугольника x2:";cin >> x2;
	cout << "Введите координату вершины треугольника y2:";cin >> y2;
	cout << "Введите координату вершины треугольника x3:";cin >> x3;
	cout << "Введите координату вершины треугольника y3:";cin >> y3;


	S = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));


	cout << "Площадь=" << S;
return 0;
}