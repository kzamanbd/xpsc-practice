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
        string s;
        cin >> s;

        string ans = "";

        for (int i = 0;i < n;i++) {
            if (i + 2 < n and s[i + 2] == '0' and (i + 3 >= n or s[i + 3] != '0')) {
                int num = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans.push_back((char)(96 + num));
                i += 2;
            }
            else {
                int num = ((s[i] - '0'));
                ans.push_back((char)(96 + num));
            }
        }

        cout << ans << endl;
    }
    return 0;
}