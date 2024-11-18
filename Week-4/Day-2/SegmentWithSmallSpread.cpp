#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solution() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;
    
    while (r < n) {
        ml.insert(a[r]);
        auto mn = *ml.begin(), mx = *ml.rbegin();
        
        if (mx-mn <= k) ans += (r-l)+1;
        else {
            while (l <= r) {
                auto MN = *ml.begin(), MX = *ml.rbegin();
                if (MX-MN <= k) break;
                
                ml.erase(ml.find(a[l]));
                l++;
            }
            
            auto MN = *ml.begin(), MX = *ml.rbegin();
            if (MX-MN <= k) ans += (r-l)+1;
        }
        r++;
    }
    
    cout << ans << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
