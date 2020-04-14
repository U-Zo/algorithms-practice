#include <iostream>
using namespace std;

int main(void) {
	int h = 0;
	int m = 0;
	int mm = 45;

	cin >> h;
	cin >> m;

	if (m - mm < 0) {
		if (h - 1 < 0)
			cout << 23 << ' ' << 60 - (mm - m) << endl;
		else
			cout << h - 1 << ' ' << 60 - (mm - m) << endl;
	}
	else {
		cout << h << ' ' << m - mm << endl;
	}

	return 0;
}