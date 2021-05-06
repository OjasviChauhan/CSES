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
 
void helper(int n, vector<int> &ans) {
    if (n == 1) {
        return;
    }
    else if (n % 2 == 0) {
        ans.push_back(n / 2);
        helper(n / 2, ans);
    }
    else if (n % 2 != 0) {
        ans.push_back(3 * n + 1);
        helper(3 * n + 1, ans);
    }
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(n);
    helper(n, ans);
    print(ans);
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
