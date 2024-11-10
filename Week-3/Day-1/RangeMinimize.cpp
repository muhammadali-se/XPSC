#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> deq(n);
        
        for (int i = 0; i < n; i++) cin >> deq[i];
        
        sort(deq.begin(), deq.end());
        int a = deq[n-3]-deq[0];
        int b = deq[n-1]-deq[2];
        int c = deq[n-2]-deq[1];
        
        cout << min(min(a, b), c) << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
