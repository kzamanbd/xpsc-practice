#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int binarySearch(vector<int> nums, int target) {
    int l = 0, r = nums.size() - 1;
    int idx = -1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] < target) {
            l = mid + 1;
            idx = mid;
        }
        else {
            r = mid - 1;
        }
    }

    return idx == -1 ? 1 : idx + 2;
}

int main() {

    fasterIO;

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while (q--) {
        int x;
        cin >> x;
        cout << binarySearch(arr, x) << endl;

    }
    return 0;
}