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
        int n, q;
        cin >> n >> q;
        vector<ll> u(n);
        for (int i = 0; i < n; i++) {
            cin >> u[i];
        }

        map<int, vector<ll>> indices;
        in_range(i, 0, n) {
            indices[u[i]].push_back(i);
        }
        while (q--) {
            int a, b;
            cin >> a >> b;
            if (indices[a].empty() or indices[b].empty()) {
                cout << "NO\n";
                continue;
            }
            if (a == b) {
                cout << "YES\n";
                continue;
            }
            if (indices[a].front() < indices[b].back()) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}