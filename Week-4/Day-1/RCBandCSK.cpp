#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int x, y; cin >> x >> y;
    if (x-y >= 18) cout << "RCB" << nl;
    else cout << "CSK" << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
