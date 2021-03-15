#include <iostream>;
using namespace std;

double eps, s, res, a;

double sum2(double eps) {
	s = 0;
	a = 0;
	for (int i = 0; ; i++) {
		a = pow(-1, i) * (1-(2 * i) / (2 * i + 1));
		s += a;
		if (abs(a) < eps) break;
	}
	return s;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = sum2(eps);
	cout << "Сумма:" << s << endl;
}
