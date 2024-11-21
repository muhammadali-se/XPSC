#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long sum = 0;
    int l = 0, ans = INT_MAX;

    for (int r = 0; r < n; ++r) {
        sum += a[r];

        while (sum >= s) {
            ans = min(ans, (r-l)+1);
            sum -= a[l];
            l++;
        }
    }

    if (ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
