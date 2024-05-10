#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define vl vector<ll>
#define vi vector<int>
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
        // your code goes here
        int n;
        cin >> n;
        vl arr(n + 1);
        in_range(i, 1, n) cin >> arr[i];

        int count = 0;
        in_range(i, 1, n + 1) {
            in_range(j, 1, n + 1) {
                if (((long long)pow(arr[i], j + 1) <= arr[j])) {
                    cout << (long long)pow(arr[i], j + 1) << " " << arr[j] << " - ";
                    cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
                    count++;
                }
                else if ((long long)pow(arr[j], i + 1) <= arr[i]) {
                    cout << (long long)pow(arr[j], i + 1) << " " << arr[i] << " - ";
                    cout << "(" << j + 1 << "," << i + 1 << ")" << endl;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}