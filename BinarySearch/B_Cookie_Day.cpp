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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0;i < n; i++) {
            cin >> arr[i];
        }
        bool flag = false;
        int res = INT_MAX;
        for (int i = 0;i < n; i++) {
            if (arr[i] >= k) {
                res = min(res, arr[i] % k);
                flag = true;
            }
        }
        if (flag) {
            cout << res << endl;
        }
        else {
            cout << "-1" << endl;
        }


    }
    return 0;
}