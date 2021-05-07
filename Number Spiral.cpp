#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define endl '\n'
#define int long long
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
int mod = 1000000007;

void solve()
{
    int r, c;
    cin >> r >> c;

    if (r > c) {
        if (r % 2 != 0) {
            cout << (r - 1)*(r - 1) + c << endl;
        }
        else {
            cout << r*r - c + 1 << endl;
        }
    }
    else {
        if (c % 2 != 0) {
            cout << c*c - r + 1 << endl;
        }
        else {
            cout << (c - 1)*(c - 1) + r << endl;
        }
    }
}


int32_t main() {
    fast;

#ifndef ONLINE_JUDGE
    auto begin = std::chrono::high_resolution_clock::now();
#endif

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();


#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(7) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
#endif

    return 0;
}
