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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int A[n], B[m];

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        v[i] = {A[i] - k, A[i] + k};
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
    sort(v.begin(), v.end());
    sort(B, B + m);

    int cnt = 0, i = 0, j = 0;
    while (j < m and i < n) {
        if (B[j] > v[i].ss) {
            i++;
        }
        else if (B[j] < v[i].ff) {
            j++;
        }
        else {
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << endl;
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
