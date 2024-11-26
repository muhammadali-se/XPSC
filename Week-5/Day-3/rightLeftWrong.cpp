#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<long long> pre(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;
        
        pre[0] = a[0];
        for (int i = 1; i < n; i++) pre[i] = pre[i-1] + a[i];

        int l = 0, r = n-1;
        long long res = 0;
        while (l < r) {
            while (l < n && s[l] != 'L') l++;
            while (r >= 0 && s[r] != 'R') r--;
            
            if (l < r && s[l] == 'L' && s[r] == 'R') {
                if (l > 0) res += pre[r] - pre[l - 1];
                else res += pre[r];
                l++, r--;
            }
            else break;
        }

        cout << res << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
