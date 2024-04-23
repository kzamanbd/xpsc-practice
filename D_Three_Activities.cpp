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
        ll n, res = 0;
        cin >> n;
        vector < ll > a(n), b(n), c(n);
        vector < pair < ll, ll > > va, vb, vc;
        pair < ll, ll > bkp, bkp2;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            va.push_back(make_pair(a[i], i));
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            vb.push_back(make_pair(b[i], i));
        }
        for (ll i = 0; i < n; i++) {
            cin >> c[i];
            vc.push_back(make_pair(c[i], i));
        }
        sort(va.begin(), va.end(), greater <>());
        sort(vb.begin(), vb.end(), greater <>());
        sort(vc.begin(), vc.end(), greater <>());

        for (ll i = 0; i < 3; i++) {
            for (ll j = 0; j < 3; j++) {
                for (ll k = 0; k < 3; k++) {
                    if (va[i].second != vb[j].second and va[i].second != vc[k].second and vb[j].second != vc[k].second) {
                        res = max(va[i].first + vb[j].first + vc[k].first, res);
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}