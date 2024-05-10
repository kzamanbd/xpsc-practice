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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1e9;
        for (int i = 'a';i <= 'z';i++) {
            int change = 0;
            int l = 0, r = n - 1;
            while (l <= r) {
                if (s[l] != s[r]) {
                    if (s[l] == i) {
                        l++;
                        change++;
                    }
                    else if (s[r] == i) {
                        r--;
                        change++;
                    }
                    else {
                        change = 1e9;
                        break;
                    }
                }
                else {
                    l++;
                    r--;
                }
            }
            ans = min(ans, change);
        }
        if (ans == 1e9) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}