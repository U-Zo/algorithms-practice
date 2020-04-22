#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void) {
	int N = 0;
	vector<pair<int, pair<int, int>>> v;

	cin >> N;

	// 입력
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(1, make_pair(x, y)));
	}

	// 비교
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				continue;
			}

			if (v[i].second.first > v[j].second.first && v[i].second.second > v[j].second.second) {
				v[j].first++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ';
	}

	return 0;
}