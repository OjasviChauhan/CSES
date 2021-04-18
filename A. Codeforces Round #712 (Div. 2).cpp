// https://codeforces.com/contest/1504/problem/A

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

bool isPalindrome(string x) {
    string y = x;
    reverse(y.begin(), y.end());
    return y == x;
}

void solve()
{
    string s;
    cin >> s;

    string s1 = s + 'a';
    string s2 = 'a' + s;

    if (!isPalindrome(s1)) {
        cout << "YES" << endl;
        cout << s1 << endl;
        return;
    }
    if (!isPalindrome(s2)) {
        cout << "YES" << endl;
        cout << s2 << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main() {
    fast;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
