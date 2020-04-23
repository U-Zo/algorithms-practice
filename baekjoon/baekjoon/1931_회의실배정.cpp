#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main(void) {
	int N, start, end, cnt = 0;
	int l = 0;
	vector<pair<int, int>> v;

	cin >> N;

	// ют╥б
	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		v.push_back(make_pair(start, end));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		if (v[i].first >= l) {
			cnt++;
			l = v[i].second;
		}
	}

	cout << cnt;

	return 0;
}