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
    string s;
    cin >> s;

    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        int idx = s[i] - 'A';
        cnt[idx]++;
    }

    // A set of characters can form a palindrome if at most one character
    // occurs odd number of times and all characters occur even number of times.
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 != 0)
            odd++;
        if (odd > 1) {
            cout << "NO SOLUTION" << endl;
            return;
        }
    }

    string ans = "";
    if (odd) {
        int c;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2 == 0) {
                for (int j = 0; j < cnt[i] / 2; j++) {
                    ans += i + 65;
                }
            }
            else {
                c = i;
            }
        }
        string remain = ans;
        reverse(remain.begin(), remain.end());
        cout << ans;

        for (int i = 0; i < cnt[c]; i++) {
            char ch = c + 65;
            cout << ch;
        }

        cout << remain << endl;
    }
    else {
        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2 == 0) {
                for (int j = 0; j < cnt[i] / 2; j++) {
                    ans += i + 65;
                }
            }
        }
        string remain = ans;
        reverse(remain.begin(), remain.end());
        cout << ans << remain << endl;
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
