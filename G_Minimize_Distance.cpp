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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        range(i, n)cin >> arr[i];
        vector<ll>v, w;
        range(i, n) {
            if (arr[i] < 0)w.push_back(arr[i] * (-1));
            else if (arr[i] > 0)v.push_back(arr[i]);
        }
        sort(all(v));
        sort(all(w));
        ll ans = 0, a = 0, b = 0;
        if (v.empty() == false) {
            if (v.size() < k) {
                a = v[v.size() - 1];
                ans += a;
            }
            else {
                a = v[v.size() - 1];
                range(i, v.size()) {
                    if (i == v.size() - 1) {
                        ans += v[i];
                    }
                    else if ((v.size() - i - 1) % k == 0) {
                        ans += v[i] * 2;
                    }
                }
            }
        }
        if (w.empty() == false) {
            if (w.size() < k) {
                b = w[w.size() - 1];
                ans += b;
            }
            else {
                b = w[w.size() - 1];
                range(i, w.size()) {
                    if (i == w.size() - 1) {
                        ans += w[i];
                    }
                    else if ((w.size() - i - 1) % k == 0) {
                        ans += w[i] * 2;
                    }
                }
            }
        }
        ans += min(a, b);
        cout << ans << "\n";
    }
    return 0;
}