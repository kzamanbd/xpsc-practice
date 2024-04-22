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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll res = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    if (res > 10) {
        cout << res % 100;
    }
    else {
        if (res == 0) {
            cout << "00";
        }
        else {
            cout << res;
        }
    }
    return 0;
}