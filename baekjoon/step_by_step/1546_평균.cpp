#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n = 0;
	int p = 0;
	double sum = 0;
	double max = 0;
	vector<int> v;
	
	cin >> n;
	cin >> p;
	max = p;
	v.push_back(p);

	for (int i = 1; i < n; i++) {
		cin >> p;
		if (max < p) {
			max = p;
		}
		
		v.push_back(p);
	}

	for (int i = 0; i < n; i++) {
		sum += (v[i] / max * 100);
	}

	cout << sum / n << endl;

	return 0;
}