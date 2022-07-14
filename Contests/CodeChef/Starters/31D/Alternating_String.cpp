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

ll alternating(string &s)
{
    ll zeroes{0}, ones{0};
    for (char c : s)
    {
        if (c == '0')
            zeroes++;
        else if (c == '1')
            ones++;
    }
    ll length = min(zeroes, ones);
    if (zeroes == ones)
        return (2 * length);
    return (2 * length + 1);
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    string s;
    cin >> n >> s;
    cout << alternating(s) << "\n";
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