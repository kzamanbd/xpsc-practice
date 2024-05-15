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

        ll sum = 0;
        if (x < 1000) {
            sum = x + 1000;
        }
        else {
            sum = x * 2;
        }
        y--;
        for (int i = 0; i < y; i++) {
            sum = sum * 2;
        }
        cout << sum << endl;
    }
    return 0;
}