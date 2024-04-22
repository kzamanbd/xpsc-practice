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

    string word = "AbBCab"; // aaAbcBC, AbBCab, abc

    int count = 0;
    map<char, string> mp;
    for (int i = 0; i < word.size(); i++) {
        mp[tolower(word[i])] += word[i];
    }

    for (auto x : mp) {
        cout << x.first << " : " << x.second << "\n";
        string s = x.second;
    }
    cout << count << "\n";

    return 0;
}