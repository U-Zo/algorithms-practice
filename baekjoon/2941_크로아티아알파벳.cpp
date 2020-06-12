#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	string str;
	vector<string> v = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int idx = 0;

	cin >> str;

	for (int i = 0; i < v.size(); i++) {
		idx = str.find(v[i]);
		while (idx != string::npos) {
			str.replace(idx, v[i].length(), "a");
			idx = str.find(v[i]);
		}
	}

	cout << str.length() << endl;

	return 0;
}