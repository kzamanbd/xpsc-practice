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
        vi a(n);
        range(i, n) cin >> a[i];
        vi b(n);
        range(i, n) cin >> b[i];

        int diff = -1, zero_diff = -1;
        bool imp = false;
        in_range(i, 0, n) {
            if (a[i] < b[i]) {
                imp = true;
                break;
            }
            if (b[i] != 0) {
                if (diff == -1) {
                    diff = a[i] - b[i];
                }
                else {
                    if (a[i] - b[i] != diff) {
                        imp = true;
                        break;
                    }
                }
            }
            else {
                zero_diff = max(zero_diff, a[i] - b[i]);
            }
        }

        if (imp) {
            cout << "NO\n";;
            continue;
        }


        (diff == -1 or zero_diff <= diff) ? cout << "YES\n" : cout << "NO\n";

    }
    return 0;
}