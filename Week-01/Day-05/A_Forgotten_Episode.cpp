#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool arr[100000];
    memset(arr, false, sizeof(arr));
    int n, x, i;
    cin >> n;
    i = 0;
    while (i < n - 1) {
        cin >> x;
        arr[x] = true;
        i++;
    }
    for (i = 1; arr[i] && i < n; i++);

    cout << i << "\n";
    return 0;
}