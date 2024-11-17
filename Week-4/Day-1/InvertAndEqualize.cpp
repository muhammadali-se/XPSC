#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        string s;
        cin >> n >> s;

        if (n == 1) {
            cout << 0 << nl;
            continue;
        }

        long long c0 = 0, c1 = 0;
        if (s[0] == '0') c0++;
        else c1++;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (s[i] == '0') c0++;
                else c1++;
            }
        }

        cout << min(c0, c1) << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
