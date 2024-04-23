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
        ll n;					cin >> n;
        vector<ll> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        ll sum = 0, op = 0;
        bool negSeg = false;
        int cons = 0;
        for (int i = 0;i <= n;i++) {
            if (i < n)sum += abs(a[i]);
            if (negSeg) {
                if (i == n or a[i] > 0) {
                    op++;
                    negSeg = false;
                }
            }
            else {
                if (a[i] < 0) {
                    negSeg = true;
                }
            }
        }

        cout << sum << " " << op << endl;
    }
    return 0;
}