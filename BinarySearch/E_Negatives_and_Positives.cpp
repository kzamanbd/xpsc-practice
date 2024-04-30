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
        int n;
        cin >> n;

        vector<ll> a(n);
        ll neg = 0, ans = 0, mn = LLONG_MAX;
        for (int i = 0;i < n;i++) {
            cin >> a[i];
            if (a[i] < 0) {
                neg++;
            }
            ans += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }

        if (neg % 2 == 1) {
            ans -= (2LL * mn);
        }

        cout << ans << endl;
    }
    return 0;
}