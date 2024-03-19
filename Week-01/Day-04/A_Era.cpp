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
        ll n, x = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        ll res = 0;
        for (int i = 0;i < n;i++) {
            if (arr[i] > (i + 1)) {
                x = abs((i + 1) - arr[i]);
                res = max(x, res);
            }
        }
        cout << res << endl;
    }
    return 0;
}