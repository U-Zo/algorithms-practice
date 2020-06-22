#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N, P, ans = 0;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> P;
		v.push_back(P);
	}

	sort(v.begin(), v.end());

	for (int i = N - 1; i >= 0; i--) {
		ans += v[i];
		for (int j = i - 1; j >= 0; j--) {
			ans += v[j];
		}
	}

	cout << ans << endl;

	return 0;
}