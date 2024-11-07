#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        
        if (arr[i] % 2 != 0) v.push_back(arr[i]);
    }
    
    if (v.empty()) cout << sum << nl;
    else {
        int min_odd = *(min_element(v.begin(), v.end()));
        if (v.size() % 2 == 0) cout << sum << nl;
        else cout << sum - min_odd << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
