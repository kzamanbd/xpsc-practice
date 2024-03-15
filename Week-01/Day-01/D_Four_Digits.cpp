#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    for (int i = 0; i < (4 - str.size()); i++) {
        cout << "0";
    }
    cout << str;
    return 0;
}