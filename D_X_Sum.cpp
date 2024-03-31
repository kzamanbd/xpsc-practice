/*
* Author: kzamanbd (kzamanbn@gmail.com)
* Created: 2024-03-31 21:40:16
* Github: https://github.com/kzamanbd
* LeetCode: https://github.com/kzamanbd
* Copyright (c) 2024 KAMRUZZAMAN
*/

#include <bits/stdc++.h>
#define ll long long
#define PQ priority_queue
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define in_range(i,x,n) for(int i=x;i<n;i++)
#define fasterIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int grid[201][201];
int n, m;

ll calculate(int i, int j) {
    // top left
    ll sum = 0;
    int index = 0;
    while (i - index > -1 && j - index > -1) {
        sum += grid[i - index][j - index];
        index++;
    }
    // top right
    index = 0;
    while (i - index > -1 && j + index < m) {
        sum += grid[i - index][j + index];
        index++;
    }
    // bottom left
    index = 0;
    while (i + index < n && j - index > -1) {
        sum += grid[i + index][j - index];
        index++;
    }
    // bottom right
    index = 0;
    while (i + index < n && j + index < m) {
        sum += grid[index + i][index + j];
        index++;
    }
    return sum - 3 * (grid[i][j]);
};

int main() {

    fasterIO;

    int tc;
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        int i, j;
        in_range(i, 0, n) {
            in_range(j, 0, m) {
                cin >> grid[i][j];
            }
        }
        ll res = 0;
        in_range(i, 0, n) {
            in_range(j, 0, m) {
                res = max(calculate(i, j), res);
            }
        }
        cout << res << endl;
    }
    return 0;
}