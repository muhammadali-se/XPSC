#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    int sum2 = 0;
    for (int i = n-1; i >= 0; i-=2) sum2 += arr[i];

    cout << sum2 << ' ' << sum-sum2 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
