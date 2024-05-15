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
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        int a = (l + v1 - 1) / v1;
        int b = (l + v2 - 1) / v2;

        if (a <= b) {
            cout << -1 << endl;
        }
        else {
            cout << (a - b - 1) << endl;
        }
    }
    return 0;
}