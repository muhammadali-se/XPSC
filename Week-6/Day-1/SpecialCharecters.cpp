#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n; cin >> n;
    
    if (n%2 != 0) {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    
    for (int i = 0; i < n/2; i++) {
        if (i%2 == 0) cout << "AA";
        else cout << "BB";
    }
    cout << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while (t--) solution();
	
	return 0;
}