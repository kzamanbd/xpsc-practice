#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int longestSubstring(string a, string b) {
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = 0;
            }
        }
    }
    int mx = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (dp[i][j] > mx) {
                mx = dp[i][j];
            }
        }
    }
    return mx;
}

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        while (q--) {
            char x;
            cin >> x;
            cout << longestSubstring(str, str) << " ";
            str += x;
        }
        cout << endl;
    }
    return 0;
}