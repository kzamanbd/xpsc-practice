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
        ll n, i, j, ans = 0;
        string s1;
        cin >> n >> s1;
        for (i = 0; i < n; i++) {
            if (s1[i] == 'L')
                ans += i;
            else
                ans += (n - i - 1);
        }
        ll l = 0, r = n - 1;
        for (i = 0; i < n; i++) {
            if (l > r) {
                cout << ans << ' ';
                continue;
            }
            ll l1, l2, r1, r2;
            if (s1[l] == 'L') {
                l1 = l;
                l2 = n - l - 1;
            }
            else {
                l1 = n - l - 1;
                l2 = l;
            }
            while (l < n - 1 && l1 >= l2) {
                l++;
                if (s1[l] == 'L') {
                    l1 = l;
                    l2 = n - l - 1;
                }
                else {
                    l1 = n - l - 1;
                    l2 = l;
                }
            }
            if (s1[r] == 'L') {
                r1 = r;
                r2 = n - r - 1;
            }
            else {
                r1 = n - r - 1;
                r2 = r;
            }
            while (r > 0 && r1 >= r2) {
                r--;
                if (s1[r] == 'L') {
                    r1 = r;
                    r2 = n - r - 1;
                }
                else {
                    r1 = n - r - 1;
                    r2 = r;
                }
            }
            if (l <= r) {
                if (l2 - l1 >= r2 - r1) {
                    ans = ans - l1 + l2;
                    if (s1[l] == 'L')
                        s1[l] = 'R';
                    else
                        s1[l] = 'L';
                }
                else {
                    ans = ans - r1 + r2;
                    if (s1[r] == 'L')
                        s1[r] = 'R';
                    else
                        s1[r] = 'L';
                }
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
    return 0;
}