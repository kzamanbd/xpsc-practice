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
        ll n, i, j;
        cin >> n;
        vector<vector<ll>> v1(n, vector<ll>(n - 1));
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                cin >> v1[i][j];
            }
        }
        map<ll, ll> m1;
        vector<ll> ans;
        for (i = 0; i < n; i++) {
            m1[v1[i][0]]++;
        }
        ll temp;
        for (auto it : m1) {
            if (it.second == n - 1) {
                ans.push_back(it.first);
            }
            else {
                temp = it.first;
            }
        }

        for (i = 1; i < n - 1; i++) {
            set<ll> s1;
            for (j = 0; j < n; j++) {
                s1.insert(v1[j][i]);
            }
            s1.erase(temp);
            ans.push_back(temp);
            temp = *s1.begin();
        }
        ans.push_back(temp);
        for (auto it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}