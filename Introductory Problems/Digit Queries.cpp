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

char calculate(int k) {
    if (k <= 9) {
        return k + 48;
    }

    int size = 1, t = 9, digits = 9, number = 9;
    int prev_num, prev_dig;
    while (digits < k) {
        size++;
        t *= 10;
        prev_num = number;
        number += t;
        prev_dig = digits;
        digits += t * size;
    }

    int sub = k - prev_dig;
    int ch_idx = sub % size;
    int new_num = prev_num + (sub / size);

    if (ch_idx == 0) {
        string ans = to_string(new_num);
        return ans[ans.size() - 1];
    }

    string ans = to_string(new_num + 1);
    return ans[ch_idx - 1];
}

void solve()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;
        cout << calculate(k) << endl;
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
