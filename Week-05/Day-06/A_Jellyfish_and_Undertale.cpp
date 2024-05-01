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
        int a, b, n;
        cin >> a >> b >> n;

        vi arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll total = b;

        for (auto x : arr) {
            total += min(1LL + x, a * 1LL) - 1;
        }
        cout << total << endl;
    }
    return 0;
}