// 백준 # 24090
// 오류 있음 추후 수정 예정
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // 배열을 정렬
    sort(A.begin(), A.end());

    // K번째 위치의 원소 출력
    if (k <= n) {
        cout << A[k - 1] << " " << A[k - 1] << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
