#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    if (sum%2 == 0) cout << sum << nl;
    else {
        sort(arr, arr+n);
        
        for (int i = 0; i < n; i++) {
            if (sum%2 == 0) {
                cout << sum << nl;
                return;
            }
            sum = sum-arr[i];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
