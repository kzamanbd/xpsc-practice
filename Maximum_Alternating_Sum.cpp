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
        vi arr(n);
        range(i, n) cin >> arr[i];

        int sum = 0;

        int i = 0, j = n - 1;
        sort(all(arr));
        while (i < j) {
            sum += abs(arr[i] - arr[j]);
            i++;
            j--;
        }
        if (n % 2 == 1) {
            sum += arr[n / 2];
        }
        cout << sum << endl;
    }
    return 0;
}