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

ll min4(int a, int b, int c, int d) {
    return min(min(a,b), min(c, d));
}

void solve()
{
    ll i{0}, j{0}, x1{0}, y1{0}, n{0}, x2{0}, y2{0}, z{0};
    cin >> n >> x1 >> y1 >> x2 >> y2;
    ll direct_cost = abs(x1 - x2) + abs(y1 - y2);
    ll getting_outside = min4(x1, y1, n - x1 + 1, n - y1 + 1);
    ll getting_in = min4(x2, y2, n - x2 + 1, n - y2 + 1);
    ll outside_path_cost = getting_outside + getting_in;
    cout << min(direct_cost, outside_path_cost) << "\n";
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