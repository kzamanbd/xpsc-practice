#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
bool isPowerOfTwo(int n) { if (n == 0)return false;return (ceil(log2(n)) == floor(log2(n))); }
ll powermod(ll x, ll y, ll p) { ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0) { if (y & 1)res = (res * x) % p;y = y >> 1;x = (x * x) % p; }return res; }
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        // your code goes here
        ll mod = 1000000007;
        ll n, k;
        cin >> n >> k;
        if (isPowerOfTwo(k)) {
            cout << powermod(n, ceil(log2(k)), mod) << "\n";
        }
        else {
            ll c = 0;
            while (k > 0) {
                if (k == 1) { c++;k = 0; }
                else if (k == 2) { c += n % mod;k = 0; }
                else if (k == 3) { c += (n + 1) % mod;k = 0; }
                else if (isPowerOfTwo(k)) {
                    c += powermod(n, ceil(log2(k)), mod);
                    k = 0;
                }
                else {
                    ll x = pow(2, floor(log2(k)));
                    c += powermod(n, floor(log2(k)), mod);
                    k -= x;
                }
            }
            cout << c % mod << "\n";
        }
    }
    return 0;
}