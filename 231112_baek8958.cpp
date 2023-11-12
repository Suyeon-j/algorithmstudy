// 백준 # 8958
#include<iostream>
#include <string>
using namespace std;

int ox(string&str){
	int cnt = 0, sum = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'o') {
			cnt++;
		}
		else {
			cnt = 0;
		}
		sum += cnt;
	}
	return sum;
}
int main() {
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		cout << ox(str) << endl;
	}
}
