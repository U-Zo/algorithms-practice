#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n = 0;
	int num = 0;
	vector<int> v;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << v.front() << ' ' << v.back() << endl;

	return 0;
}