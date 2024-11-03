#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b == c) cout << '+' << nl;
        else cout << '-' << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
