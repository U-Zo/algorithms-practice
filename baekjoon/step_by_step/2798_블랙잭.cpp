#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int N = 0;
	int M = 0;
	int num = 0;
	vector<int> v;
	int max = 0;
	int tmp = 0;

	cin >> N;
	cin >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num); 
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				tmp = v[i] + v[j] + v[k];
				if (max < tmp && tmp <= M)
					max = tmp;
			}
		}
	}

	cout << max;

	return 0;
}