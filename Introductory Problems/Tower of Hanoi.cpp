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

// ------------------------------------------------------------------------------------------------

vector<pair<int, int>> v;

void TOH(int s, int h, int d, int n) {
    if (n == 1) {
        v.push_back({s, d});
        return;
    }
    TOH(s, d, h, n - 1);
    v.push_back({s, d});
    TOH(h, s, d, n - 1);
}

void solve()
{
    int n;
    cin >> n;
    int s = 1;
    int h = 2;
    int d = 3;

    TOH(s, h, d, n);

    cout << v.size() << endl;
    for (auto p : v) {
        cout << p.first << " " << p.second << endl;
    }
}

// ------------------------------------------------------------------------------------------------

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
