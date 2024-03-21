#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int query;
    cin >> query;
    while (query--) {
        int n;
        cin >> n;
        if (n <= 1399) {
            cout << "Division 4";
        }
        else if (n >= 1400 && n <= 1599) {
            cout << "Division 3";
        }
        else if (n >= 1600 && n <= 1899) {
            cout << "Division 2";
        }
        else {
            cout << "Division 1";
        }
        cout << endl;
    }
    return 0;
}