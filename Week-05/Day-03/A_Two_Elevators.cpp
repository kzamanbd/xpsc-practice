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
        int a, b, c;
        cin >> a >> b >> c;

        int ans1 = abs(a - 1);
        int ans2 = abs(b - c) + (c - 1);

        if (ans1 == ans2) {
            cout << 3 << endl;
        }
        else if (ans1 < ans2) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
    return 0;
}