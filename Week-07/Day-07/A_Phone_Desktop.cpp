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
        int x, y;
        cin >> x >> y;

        int largeScreen = ceil(y * 1.0 / 2);

        if (largeScreen > 0) {
            cout << largeScreen + ceil(x * 1.0 / 7) << endl;
        }
        else {
            cout << ceil(x * 1.0 / 15.00) << endl;
        }


        // float totalScreen = largeScreen * 1.0 / 15.0;
        // cout << ceil(totalScreen) << " " << largeScreen << " " << totalScreen << endl;
    }
    return 0;
}