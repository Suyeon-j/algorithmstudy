// 백준 # 2161
#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    queue<int> q;
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    if (n == 1) {
        cout << q.front();
        return 0;
    }

    cout << q.front() << ' ';
    q.pop();

    while (q.size() != 1) {
        int N = q.front();
        q.push(N);
        q.pop();
        int tmp = q.front();
        cout << tmp << ' ';
        q.pop();
    }
    cout << q.front();
}
