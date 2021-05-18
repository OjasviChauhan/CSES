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

int filter(int A[], int n) {
    int j = 0, sum = 0;
    while (n > 0) {
        if (n & 1) sum += A[j];
        j++;
        n = n >> 1;
    }
    return sum;
}

void solve()
{
    int n;
    cin >> n;
    int A[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sum += A[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < (1 << n); i++) {
        int c = filter(A, i);
        ans = min(ans, abs(sum - 2 * c));
    }
    cout << ans << endl;
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
