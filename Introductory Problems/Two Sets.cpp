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
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    if (sum % 2) {
        cout << "NO" << endl;
        return;
    }
    else {
        cout << "YES" << endl;
        int k = sum / 2, t = 0;
        unordered_set<int> s;
        for (int i = 1; i <= n; i++) {
            if (t > k) break;
            s.insert(i);
            t += i;
        }
        s.erase(t - k);
        cout << s.size() << endl;
        for (auto x : s) cout << x << " ";
        cout << endl;

        cout << n - s.size() << endl;
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                cout << i << " ";
            }
        }
        cout << endl;
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
