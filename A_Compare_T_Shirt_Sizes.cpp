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
        string a, b; cin >> a >> b;

        if (a[a.size() - 1] == b[b.size() - 1]) {
            if (a.size() > b.size()) {
                if (a[a.size() - 1] == 'S') {
                    cout << "<" << endl;
                }
                else {
                    cout << ">" << endl;
                }
            }
            else if (a.size() < b.size()) {
                {
                    if (a[a.size() - 1] == 'S') {
                        cout << ">" << endl;
                    }
                    else {
                        cout << "<" << endl;
                    }
                }
            }
            else cout << "=" << endl;
        }
        else {
            int szA = a[a.size() - 1] == 'S' ? 1 : a[a.size() - 1] == 'M' ? 2 : 3;
            int szB = b[b.size() - 1] == 'S' ? 1 : b[b.size() - 1] == 'M' ? 2 : 3;
            if (szA > szB) cout << ">" << endl;
            else if (szA < szB) cout << "<" << endl;
            else cout << "=" << endl;
        }
    }
    return 0;
}