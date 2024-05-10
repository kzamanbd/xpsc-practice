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
        int ar[n];
        map<int, int>mp, mp1;
        for (int i = 0;i < n;i++) {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        vector<int>v;
        for (auto it : mp) {
            int x = it.first;
            int y = it.second;
            if (x <= n) {
                for (int i = 1;i < y;i++)v.push_back(x);
                mp1[x] = 1;
            }
            else {
                for (int i = 1;i <= y;i++)v.push_back(x);
            }
        }
        int cnt = 1;
        int ans = 0;
        for (int i = 0;i < v.size();i++) {
            for (int j = cnt;j <= n;j++) {
                if (mp1[j] == 1)cnt++;
                else break;
            }
            int x = (v[i] - 1) / 2;
            if (cnt <= x) {
                cnt++;
                ans++;
            }
            else {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}