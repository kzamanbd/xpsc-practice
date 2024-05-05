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
        int one = 0, zero = 0;
        for (char e : s) {
            if (e == '1') {
                one++;
            }
            else {
                zero++;
            }
        }

        ll mn = min(one, zero);

        if (mn % 2 == 0) {
            cout << "Ramos" << endl;
        }
        else {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}