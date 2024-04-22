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
        int n;
        cin >> n;
        vector<int> arr(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
        }

        int num = total / n;
        int carry = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < num) {
                int need = num - arr[i];
                if (carry >= need) {
                    carry -= need;
                    arr[i] = num;
                }
            }
            else if (arr[i] > num) {
                carry += arr[i] - num;
                arr[i] = num;
            }
        }
        if (carry != 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}