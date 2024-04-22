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

    int tc;
    cin >> tc;
    while (tc--) {
        string str1, str2;
        cin >> str1 >> str2;
        swap(str1[0], str1[1]);


        if (stoi(str1) >= stoi(str2)) {
            cout << "Yes\n";
        }
        else {
            swap(str2[0], str2[1]);
            if (stoi(str1) >= stoi(str2)) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
    }
    return 0;
}