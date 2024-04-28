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
        ll c;
        cin >> c;
        vector<ll> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
            a[i] += (i + 1);
        }

        sort(a.begin(), a.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0;i < n;i++) {
            if (sum + a[i] > c)break;
            sum += a[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}