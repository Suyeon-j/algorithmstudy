// 백준 # 1068
#include <iostream>
#include <vector>

using namespace std;
int n, k, root, leaf = 0;
vector<int> tree[75];


int DFS(int node) {
	if (node == k) return -1;
	if (!tree[node].size()) {
		leaf++;
		return 0;
	}

	for (int i = 0; i < tree[node].size(); i++) {
		int tmp = DFS(tree[node][i]);
		if (tmp == -1 && tree[node].size() == 1)
			leaf++;
	}

	return 0;
}

void cnt() {
	DFS(root);
	cout << leaf;
}



int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ftree;
		cin >> ftree;
		if (ftree == -1)
			root = i;
		else
			tree[ftree].push_back(i);
	}
	cin >> k;
	cnt();

	return 0;
}
