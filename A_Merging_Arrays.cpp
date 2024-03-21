#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    // priority_queue<int, vector<int>, greater<int>> pq;
    int x;
    for (int i = 0; i < n; i++) {
        // cin >> x;
        // pq.push(x);
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        // cin >> x;
        // pq.push(x);
        cin >> arr2[i];
    }

    vector<int> res;
    int i = 0, j = 0;
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
    // while (!pq.empty()) {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    return 0;
}