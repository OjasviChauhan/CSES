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

void solve() {
    int n, x;
    cin >> n >> x;
    int p[n];
    for (int i = 0; i < n; ++i)
        cin >> p[i];

    bool have_gondola_yet[n];
    memset(have_gondola_yet, false, sizeof have_gondola_yet);

    sort(p, p + n);
    int i = 0, j = n - 1;
    int ans = 0;
    while (i < j) {
        if (p[i] + p[j] > x) {
            j--;
        }
        else {
            ans++;
            have_gondola_yet[i] = have_gondola_yet[j] = true;
            i++; j--;
        }
    }
    for (int i = 0; i < n; ++i) {
        ans += have_gondola_yet[i] == false;
    }
    cout << ans << "\n";
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
