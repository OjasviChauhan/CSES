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
 
 
 
void helper(string &s, string &ds, vector<string> &v, bool used[]) {
    if (ds.size() == s.size()) {
        v.push_back(ds);
        return;
    }
 
    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && s[i - 1] == s[i] && !used[i - 1]) continue;
 
        used[i] = 1;
        ds.push_back(s[i]);
        helper(s, ds, v, used);
        ds.pop_back();
        used[i] = 0;
    }
}
 
void solve()
{
    string s;
    cin >> s;
 
    string ds = "";
    vector<string> res;
    bool used[s.size()];
    memset(used, 0, sizeof used);
 
    sort(s.begin(), s.end());
    helper(s, ds, res, used);
 
    cout << res.size() << endl;
    for (string x : res) {
        cout << x << endl;
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
