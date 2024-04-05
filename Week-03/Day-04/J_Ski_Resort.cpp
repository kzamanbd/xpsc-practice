#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, k, q, i, j, x, ans = 0, days = 0;
        cin >> n >> k >> q;

        for (i = 0, j = 0; i < n; i++) {
            cin >> x;
            if (x <= q)
                days++;
            else {
                if (days >= k) {
                    ll temp = days + 1 - k;
                    ans += ((temp + 1) * temp) / 2;
                }
                days = 0;
            }
        }

        if (days >= k) {
            ll temp = days + 1 - k;
            ans += ((temp + 1) * temp) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}