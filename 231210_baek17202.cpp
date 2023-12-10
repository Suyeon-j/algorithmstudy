#include <iostream>
#include <vector>
using namespace std;

string p1, p2;
vector <int> v;
void init() {
	cin >> p1 >> p2;
	for (int i = 0; i < 8; i++) {
		v.push_back(int(p1[i]) - 48);
		v.push_back(int(p2[i]) - 48);

	}
}

void solve(vector<int> v) {
	if (v.size() == 2) {
		cout << v[0] << v[1];
		return;
	}
	vector <int> v2;
	for (int i = 1; i < v.size(); i++) {
		v2.push_back((v[i - 1] + v[i]) % 10);
	}
	solve(v2);
}

int main() {
	init();
	solve(v);
}
