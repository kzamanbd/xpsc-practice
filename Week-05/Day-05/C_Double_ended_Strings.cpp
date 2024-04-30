#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int lcs(string X, string Y, int m, int n) {
    int dp[m + 1][n + 1];
    int result = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }

            else if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                result = max(result, dp[i][j]);
            }
            else {
                dp[i][j] = 0;
            }
        }
    }
    return result;
}

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        string a, b;
        cin >> a >> b;

        int m = a.length();
        int n = b.length();

        int ls = lcs(a, b, m, n);
        cout << m - ls + n - ls << "\n";

    }
    return 0;
}