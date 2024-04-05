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
        ll n, i, power = 0;
        cin >> n;
        vector<ll> v1(n);
        for (i = 0; i < n; i++) {
            cin >> v1[i];
        }
        priority_queue<ll> pq;
        for (i = 0; i < n; i++) {
            if (v1[i] == 0 && (!pq.empty())) {
                power += pq.top();
                pq.pop();
            }
            else {
                pq.push(v1[i]);
            }
        }
        cout << power << endl;
    }
    return 0;
}