#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        vector<ll> prefix(n);
        ll total = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            arr[i] = x;
            prefix[i] = x;
            total += x;
            if (i > 0) {
                prefix[i] = prefix[i] + prefix[i - 1];
            }
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            ll totalEl = r - l + 1;
            ll addedSum = totalEl * k;
            ll leftSum = 0;
            if (l - 2 == -1) {
                leftSum = 0;
            }
            else {
                leftSum = prefix[l - 2];
            }
            ll deletedSum = prefix[r - 1] - leftSum;
            ll sum = (total - deletedSum) + addedSum;
            if (sum % 2 == 1) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}