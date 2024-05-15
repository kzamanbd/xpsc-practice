#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define vl vector<ll>
#define vi vector<int>
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
        // your code goes here
        int n;            cin >> n;
        vector<ll> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        vector<ll> freq(n + 2, 0);
        for (int i = 0;i < n;i++) {
            if (a[i] > n)continue;
            freq[a[i]]++;
        }

        ll ans = 0;
        for (int i = 1;i <= n;i++) {
            ll here = 0;
            for (ll x = 1;x * x <= i;x++) {
                if (i % x == 0) {
                    here += freq[x];
                    if (x * x != i) {
                        here += freq[i / x];
                    }
                }
            }
            ans = max(ans, here);
        }

        cout << ans << endl;
    }
    return 0;
}