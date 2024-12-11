#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++) cin >> a[i];
    
    bool ok = false;
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) sum += a[j];
            else sum -= a[j];
        }
        
        if (sum%360 == 0) {
            ok = true;
            break;
        }
    }
    
    if (ok) cout << "YES" << nl;
    else cout << "NO" << nl;
	
	return 0;
}
