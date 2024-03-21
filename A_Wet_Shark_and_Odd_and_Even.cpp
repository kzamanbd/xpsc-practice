#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll i, j, k;
    ll sum = 0, n;

    cin >> n;
    ll arr[n];
    for (i = 0;i < n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0) {
        cout << sum << endl;
    }

    else {
        sort(arr, arr + n);
        for (i = 0;i < n;i++) {
            if ((sum - arr[i]) % 2 == 0) {
                cout << sum - arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}