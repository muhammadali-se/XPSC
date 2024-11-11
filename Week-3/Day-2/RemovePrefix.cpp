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
        set<int> s;
        
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int indx = 0;
        for (int i = n-1; i >= 0; i--) {
            if (s.count(arr[i]) > 0) {
                indx = i+1;
                break;
            }
            else s.insert(arr[i]);
        }
        
        cout << indx << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
