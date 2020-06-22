#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int N, K, A, cnt = 0;
	vector<int> v;
	
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> A;
		v.push_back(A);
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		cnt += K / v[i];
		K = K % v[i];
	}

	cout << cnt;

	return 0;
}