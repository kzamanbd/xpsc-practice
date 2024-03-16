#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<int> freq(26, 0);

    for (char ch : str) {
        freq[ch - 'a']++;
    }

    bool flag = true;
    char res;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            flag = false;
            res = ('a' + i);
            break;
        }
    }

    if (flag) {
        cout << "None";
    }
    else {
        cout << res;
    }

    return 0;
}