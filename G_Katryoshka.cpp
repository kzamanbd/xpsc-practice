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

    ll eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    ll minElement = min(min(eyes, mouths), bodies);

    eyes -= minElement;
    mouths -= minElement;
    bodies -= minElement;

    ll res = minElement;

    if (bodies > 0) {
        ll halfEyes = eyes / 2;
        if (halfEyes <= bodies) {
            res += halfEyes;
        }
        else {
            res += bodies;
        }
    }
    cout << res;
    return 0;
}