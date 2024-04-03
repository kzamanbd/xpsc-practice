#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, i, j;
        string s1;
        cin >> n;
        vector<string> v1;
        set<string> st1;
        for (i = 0; i < n; i++) {
            cin >> s1;
            v1.push_back(s1);
            st1.insert(s1);
        }
        string ans;
        for (i = 0; i < n; i++) {
            s1 = v1[i];
            ll m = s1.size();
            bool f = false;
            for (j = 1; j < m; j++) {
                string temp1 = s1.substr(0, j);
                string temp2 = s1.substr(j, m - j);
                if (st1.count(temp1) && st1.count(temp2)) {
                    f = true;
                    break;
                }
            }
            if (f)
                ans.push_back('1');
            else
                ans.push_back('0');
        }
        cout << ans << endl;
    }
    return 0;
}