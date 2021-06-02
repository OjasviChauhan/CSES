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
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
int mod = 1000000007;

// ------------------------------------------------------------------------------------------------

int n, m;
multiset<int> z;

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        z.insert(t);
    }
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        auto it = z.upper_bound(t);
        if (it == z.begin()) cout << -1 << endl;
        else {
            cout << *prev(it) << endl;
            z.erase(prev(it));
        }
    }
}

// ------------------------------------------------------------------------------------------------

int32_t main() {
    fast;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    auto begin = std::chrono::high_resolution_clock::now();

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(7) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;

    return 0;
}
