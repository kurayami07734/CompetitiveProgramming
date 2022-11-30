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
}
int main()
{
    fastio;
    int y{0};
    cin >> y;
    int rem = y % 4, ans{0};
    if(rem == 2)
        ans = y;
    else if(rem == 1)
        ans = y + 1;
    else if(rem == 3)
        ans = y + 3;
    else
        ans = y + 2;
    cout << ans << "\n";
    // cin >> n;
    // while (T--)
    // {
    //     solve();
    // }
    return 0;
}