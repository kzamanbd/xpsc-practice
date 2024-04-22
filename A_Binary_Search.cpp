#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

bool binarySearch(vector<ll>& arr, int x) {

    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == x) {
            return true;
        }
        if (arr[mid] > x) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return false;
}

int main() {

    fasterIO;

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while (q--) {
        ll x;
        cin >> x;
        if (binarySearch(arr, x)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}