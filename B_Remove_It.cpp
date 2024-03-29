#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val, x;
    cin >> n >> val;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (val != x) {
            res.push_back(x);
        }
    }

    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}