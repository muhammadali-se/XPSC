#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solution() {
    int n; cin >> n;
    vector<ll> p(n);
    vector<pair<ll, int>> a, b;

    for (int i = 0; i < n; i++) cin >> p[i];
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') a.push_back({p[i], i});
        else b.push_back({p[i], i});
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll cur = 1;
    vector<ll> ans(n);

    for (auto pi: b) {
        ans[pi.second] = cur;
        cur++;
    }

    for (auto pi: a) {
        ans[pi.second] = cur;
        cur++;
    }

    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) solution();
    
    return 0;
}
