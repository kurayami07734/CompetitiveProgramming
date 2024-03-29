#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using vi = std::vector<int>;
using vd = std::vector<double>;
using vll = std::vector<ll>;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define all(x) x.begin(), x.end()
void solve()
{
    ll i{0}, j{0}, k{0}, r{0}, n{0}, x{0}, y{0}, z{0};
    cin >> x >> y >> n >> r;
    // x = 2, y = 10, n = 4, r = 12;
    ll maxCost = n * y, minCost = n * x;
    if (minCost > r)
    {
        cout << "-1\n";
        return;
    }
    if (maxCost <= r)
    {
        cout << 0 << " " << n << "\n";
        return;
    }
    k = (r - n * x) / (y - x);
    cout << n - k << " " << k << "\n";
}
int main()
{
    fastio;
    int T{0};
    cin >> T;
    // cin >> n;
    while (T--)
    {
        solve();
    }
    return 0;
}