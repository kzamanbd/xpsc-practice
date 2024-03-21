#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n];
        int minNumber = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            minNumber = min(minNumber, arr[i]);
        }
        int candies = 0;
        for (int i = 0; i < n; i++) {
            candies += arr[i] - minNumber;
        }
        cout << candies << endl;

    }
    return 0;
}