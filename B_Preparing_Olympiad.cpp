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

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 0;
    for (int m = 0; m < (1 << n); m++) {
        int mn = INT_MAX, mx = INT_MIN, count = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if ((m & (1 << i)) != 0) {
                count++;
                sum += arr[i];
                mn = min(mn, arr[i]);
                mx = max(mx, arr[i]);
            }
        }
        if (mx - mn >= x && sum >= l && sum <= r && count >= 2) {
            res++;
        }
    }
    cout << res;

    return 0;
}