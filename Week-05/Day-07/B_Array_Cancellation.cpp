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
        ll n;
        cin >> n;

        ll pos = 0, neg = 0;
        for (ll i = 1;i <= n;i++) {
            ll x;
            cin >> x;
            if (x >= 0) {
                pos += x;
            }
            else {
                if (pos + x >= 0) {
                    pos += x;
                }
                else {
                    x += pos;
                    pos = 0;
                    neg += x;
                }
            }
        }

        cout << -neg << endl;
    }
    return 0;
}