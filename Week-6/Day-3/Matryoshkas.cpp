#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    set<int> s;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
        s.insert(a[i]);
        s.insert(a[i] + 1);
    }
    
    int l = 0, ans = 0;
    for (auto x: s) {
        int c = cnt[x];
        ans += max(0, c-l);
        l = c;
    }
    
    cout << ans << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) solution();
	
	return 0;
}
