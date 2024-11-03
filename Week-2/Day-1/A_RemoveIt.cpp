#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int val: arr) {
        if (val != x) cout << val << ' ';
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
