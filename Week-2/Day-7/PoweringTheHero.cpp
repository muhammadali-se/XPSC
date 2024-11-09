#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;
        long long ans = 0;
        
        while (n--) {
            int x;
            cin >> x;
            
            if (x > 0) pq.push(x);
            else {
                if (!pq.empty()) {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        
        cout << ans << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
