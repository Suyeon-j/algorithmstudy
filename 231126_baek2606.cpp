#include <iostream>
#include <vector>
using namespace std;

bool visited[101];
vector<int> G[101];
int cnt = 0;

void dfs(int x) {
    cnt++;
    visited[x] = true;
    for (int i : G[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        int c, d;
        cin >> c >> d;
        G[c].push_back(d);
        G[d].push_back(c);
    }

    dfs(1);
    cout << cnt - 1;
    return 0;
}
