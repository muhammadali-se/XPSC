#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    string a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) cnt++;
    }

    cout << cnt << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
