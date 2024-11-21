#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t; cin >> t;
    while (t--) {
        int a, b, n, tar;
        cin >> a >> b >> n >> tar;
        int res = 0;
        
        int maxN = min(a, tar/n)*n;
        res += maxN;
        
        if (tar-maxN <= b) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
