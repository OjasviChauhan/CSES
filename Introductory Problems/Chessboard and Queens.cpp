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

bool isSafe(char A[][8], int i, int j) {
    for (int row = 0; row < i; row++) {
        if (A[row][j] == 'q') {
            return false;
        }
    }

    int x = i;
    int y = j;
    while (x >= 0 and y >= 0) {
        if (A[x][y] == 'q') {
            return false;
        }
        x--;
        y--;
    }

    x = i;
    y = j;
    while (x >= 0 and y < 8) {
        if (A[x][y] == 'q') {
            return false;
        }
        x--;
        y++;
    }
    return true;
}

void helper(char A[][8], int i, int &ans) {
    if (i == 8) {
        ans++;
        return;
    }

    for (int j = 0; j < 8; j++) {
        if (A[i][j] == '*')
            continue;

        if (isSafe(A, i, j)) {
            A[i][j] = 'q';

            helper(A, i + 1, ans);

            A[i][j] = '.';  //backtrack
        }
    }
}

void solve()
{
    char A[8][8];
    int ans = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> A[i][j];
        }
    }

    helper(A, 0, ans);
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
