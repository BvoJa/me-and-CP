#include<bits/stdc++.h>
#define ll long long 
#define int ll
#define pii pair<int, int>
#define fi first
#define se second
#define sq(x) 1LL * (x) * (x)
#define ALL(v) v.begin(), v.end()
#define pb push_back
#define MP make_pair
#define MT make_tuple
#define typeT tuple<int, int, int>
#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define FOD(i, a, b) for (int i = (a), _b = (b); i >= _b; i--)
#define MASK(i) (1LL << (i))
#define BIT(k, i) (((k) >> (i)) & 1)
const int N = 1e6 + 5;

using namespace std;
int n, a[N];


signed main() {
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);
#define task "a"
    // freopen(task".inp", "r", stdin);
    // freopen(task".out", "w", stdout);

    int n = 100;
    FOD(i, 31, 0) cout << BIT(n, i);
    
    return 0;
}
