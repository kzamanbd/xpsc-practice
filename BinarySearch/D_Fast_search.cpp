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

int binarySearch(vi nums, int target) {
    int left = 0, right = nums.size() - 1;
    int idx = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
            idx = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return idx;
}

int main() {

    fasterIO;

    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        auto itL = lower_bound(all(nums), l);
        auto itR = lower_bound(all(nums), r);
        if (*itL == l) {

        }
        else {
            cout << "0 ";
        }
    }
    return 0;
}