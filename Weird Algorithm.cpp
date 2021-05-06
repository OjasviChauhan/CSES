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
    int A[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> A[i];
    }

    int i = 0;
    while (i < n - 1) {
        int idx = A[i] - 1;
        if (idx < n - 1 and A[i] != i + 1 and A[idx] != idx + 1) {
            swap(A[i], A[idx]);
        }
        else i++;
    }
    //print(A);
    for (int i = 0; i < n; i++) {
        if (A[i] != i + 1) {
            cout << i + 1 << endl;
            return;
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
