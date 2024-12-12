#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n; cin >> n;
	deque<int> ans;
	
	for (int k = 0; k <= __lg(n); k++) {
	    if ((n >> k) & 1) {
	        long long val = n - (1LL << k);
	        if (val > 0) ans.push_front(val);
	    }
	}
	
	ans.push_back(n);
	cout << ans.size() << nl;
	for (int val: ans) cout << val << ' ';
	cout << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) solution();
	
	return 0;
}
