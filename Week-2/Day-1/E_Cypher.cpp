#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) cin >> arr[i];

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if (c == 'D') {
                    if (arr[i] == 9) arr[i] = 0;
                    else arr[i]++;
                }
                if (c == 'U') {
                    if (arr[i] == 0) arr[i] = 9;
                    else arr[i]--;
                }
            }
        }

        for (int val: arr) cout << val << ' ';
        cout << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
