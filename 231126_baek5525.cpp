#include <iostream>
#include <string>
using namespace std;
int n, m, A = 0;
string str;

int main() {
    cin >> n >> m >> str;
    for (int i = 1; i < str.size(); i++) {
        int cnt = 0;
        if (str[i - 1] == 'I') {
            while (str[i] == 'O' && str[i + 1] == 'I') {
                i += 2;
                cnt++;
                if (cnt == n) { 
                    cnt--; 
                    A++; 
                }
            }
        }
    }
    cout << A << endl;
    return 0;
}
