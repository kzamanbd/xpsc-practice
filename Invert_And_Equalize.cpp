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
        int zeroGroups = 0, oneGroups = 0;
        char prevChar = s[0];

        if (prevChar == '0') zeroGroups++;
        else oneGroups++;

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != prevChar) {
                if (s[i] == '0') zeroGroups++;
                else oneGroups++;
                prevChar = s[i];
            }
        }
        cout << min(zeroGroups, oneGroups) << endl;

    }
    return 0;
}