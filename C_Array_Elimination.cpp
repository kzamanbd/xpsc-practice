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
        vector<int> a(n), res(33);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int j = 0; j < 32; j++) {
            for (int i = 0; i < n; i++) {
                if (a[i] & (1 << j)) res[j]++;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            bool ok = true;
            for (int j = 0; j < 32; j++) {
                if (res[j] % i != 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}