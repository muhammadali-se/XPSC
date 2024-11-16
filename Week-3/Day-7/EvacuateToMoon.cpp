#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
using ll = long long;

void solution() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> a(n), b(m);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        
        long long ans = 0;
        int i = 0;
        while (i != a.size() && i != b.size()) {
            ans += min(a[i], b[i]*h);
            i++;
        }
        
        cout << ans << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
