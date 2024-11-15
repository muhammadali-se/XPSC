#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a >= b) cout << a << nl;
        else cout << max(0, 2 * a - b) << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
