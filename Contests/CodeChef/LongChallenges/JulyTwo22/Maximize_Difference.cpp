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
    ll i{0}, j{0}, diff{0}, m{0}, n{0}, a{0}, b{0}, z{0};
    cin >> n >> m;
    i = n;
    while(i <= m and i <= 2*n)
    {
        if(diff <= abs(i - m + m%i))
        {
            a = i;
            b = m - m % i;
            diff = abs(a - b);
        }
        i++;
    }
    cout << a << " " << b << "\n";
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