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
        ll n, num, ans = 0, i;
        cin >> n;
        map<ll, ll> m1;
        while (n--) {
            cin >> num;
            m1[num]++;
        }
        vector<pair<ll, ll>> v1;
        for (auto it : m1) {
            v1.push_back({ it.first, it.second });
        }
        ll t1 = v1[0].first, t2 = v1[0].second;
        n = v1.size();
        for (i = 1; i < n; i++) {
            if (v1[i].first == t1 + 1) {
                if (t2 > v1[i].second)
                    ans += (t2 - v1[i].second);
            }
            else
                ans += t2;
            t1 = v1[i].first;
            t2 = v1[i].second;
        }
        ans += t2;
        cout << ans << endl;
    }
    return 0;
}