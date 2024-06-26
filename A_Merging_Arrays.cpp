#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define range(i,n) for(int i=0;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {

    fasterIO;

    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    int i, j;
    range(i, n) cin >> arr1[i];
    range(i, m) cin >> arr2[i];

    vector<int> res;
    i = 0, j = 0;
    while (i < n || j < m) {
        if (i < n && arr1[i] < arr2[j]) {
            res.push_back(arr1[i]);
            i++;
        }
        else {
            if (j < m) {
                res.push_back(arr2[j]);
                j++;
            }
        }
    }
    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}