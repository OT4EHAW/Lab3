#include <iostream>;
using namespace std;

int n, i;
double s, res;

double sum(int n) {

	do {
		s += pow(-1, i) * (1-(2 * i) / (2 * i + 1));
		i++;
	} while (i < n);
	return s;
}

void main(void) {
	setlocale(LC_ALL, "RUS");
	cout << "n:";
	cin >> n;
	res = sum(n);
	cout << "Сумма:" << s << endl;

}
