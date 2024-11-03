#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());

        if (s == "Timru") cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
