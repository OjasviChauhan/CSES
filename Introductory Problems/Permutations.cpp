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
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n < 4) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        if (n % 2 == 0) {
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 1; i <= n - 1; i += 2) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            for (int i = 1; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 2; i <= n - 1; i += 2) {
                cout << i << " ";
            }
            cout << endl;
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

    // int t;
    // cin >> t;
    // while (t--)
    solve();


#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(7) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
#endif

    return 0;
}
