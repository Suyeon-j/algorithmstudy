// 백준 # 17608
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int max = 0, n, vi, cnt = 0;
    stack<int> stk;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vi;
        stk.push(vi);
    }
    while (stk.size())
    {
        if (max < stk.top())
        {
            max = stk.top();
            cnt++;
        }
        stk.pop();
    }
    cout << cnt << endl;
}
