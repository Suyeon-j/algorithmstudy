// 백준 # 24060
#include <iostream>
using namespace std;

int* tmp, * numbers, cnt = 1;

void merge(int n[], int p, int q, int r);
void merge_sort(int n[], int p, int r) {
    if (p < r) {
        int q = ((p + r) / 2);
        merge_sort(n, p, q);
        merge_sort(n, q + 1, r);
        merge(n, p, q, r);
    }
}

void merge(int n[], int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (n[i] <= n[j]) {
            tmp[t++] = n[i++];
            numbers[cnt++] = tmp[t - 1];
        }
        else {
            tmp[t++] = n[j++];
            numbers[cnt++] = tmp[t - 1];
        }
    }

    while (i <= q) {
        tmp[t++] = n[i++];
        numbers[cnt++] = tmp[t - 1];
    }

    while (j <= r) {
        tmp[t++] = n[j++];
        numbers[cnt++] = tmp[t - 1];
    }

    i = p, t = 1;

    while (i <= r)
        n[i++] = tmp[t++];
}

int main() {
    int n_size = 0, k = 0;

    cin >> n_size >> k;
    int* n = new int[n_size + 1];
    tmp = new int[n_size + 1];
    numbers = new int[100000000];

    for (int i = 0; i < n_size; i++) {
        cin >> n[i];
    }

    merge_sort(n, 0, n_size - 1);
    if (k < cnt)
        cout << numbers[k];
    else
        cout << -1;

    delete[] n, tmp, numbers;
    return 0;
}
