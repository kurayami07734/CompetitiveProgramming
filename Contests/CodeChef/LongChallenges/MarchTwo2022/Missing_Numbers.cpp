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
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    vll v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(all(v));
    ll a{0}, b{0};
    a = (v[1] + v[2]) / 2;
    b = (v[2] - v[1]) / 2;
    if (v[3] == a * b)
        cout << a << " " << b << "\n";
    else
        cout << "-1 -1\n";
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