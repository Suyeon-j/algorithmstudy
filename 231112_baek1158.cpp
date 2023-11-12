// 백준 # 1158
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n = 0, k = 0;
    vector<int> v;
    queue<int> q;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for (int i = 0; i < n - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[n - 1] << ">";
    return 0;
}
