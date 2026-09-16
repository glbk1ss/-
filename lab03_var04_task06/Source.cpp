#include <iostream>
#include <Windows.h>

using namespace std;
 
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int h, m, s, p, q, r, ts, tspqr, ts_diff, day, h1, m1, s1, t_new_day ;

	
	
	cout << "Сколько часов на часах?", cin >> h;
	if (h < 0 || h > 23) {
		cout << "Неверно введено значение часов";
		return 0;
	}
	cout << "Сколько минут на часах?", cin >> m;
	if ( m < 0 || m >59) {
		cout << "Неверно введено значение минут";
		return 0;
	}
	cout << "Сколько секунд на часах?", cin >> s;
	if (s < 0 || s > 59) {
		cout << "Неверно введено значение секунд";
		return 0;
	}


	
	
	
	cout << "Сколько прошло часов?", cin >> p;
	if (h < 0 || h > 23) {
		cout << "Неверно введено значение часов";
		return 0;
	}
	cout << "Сколько прошло минут?", cin >> q;
	if (m < 0 || m >59) {
		cout << "Неверно введено значение минут";
		return 0;
	}
	cout << "Сколько прошло секунд?", cin >> r;
	if (s < 0 || s > 59) {
		cout << "Неверно введено значение секунд";
		return 0;
	}


	ts = h * 3600 + m * 60 + s;
	tspqr = p * 3600 + q * 60 + r;
	ts_diff = ts - tspqr;

	day = 24 * 60 * 60;

	t_new_day = (ts_diff % day + day) % day;


	h1 = t_new_day / 3600;
	m1 = (t_new_day % 3600)/60;
	s1 = t_new_day % 60;


	cout << "Часы показывали время:" << h1 << ":" << m1 << ":" << s1;











	











	return 0;
}