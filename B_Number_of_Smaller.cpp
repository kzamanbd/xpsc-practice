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

    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    int i, j;
    range(i, n) cin >> arr1[i];
    range(j, n) cin >> arr2[j];
    vector<int> res(m);
    i = 0, j = 0;
    int count = 0;
    while (j < m) {
        if (arr2[j] > arr1[i]) {
            count++;
            res[j] = res.back() + count;
            j++;
        }
        else {
            i++;
            count = 0;
        }
    }
    for (auto val : res) {
        cout << val << " ";
    }



    return 0;
}