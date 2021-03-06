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
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll zeroes{0}, ones{0};
    for (int num : v)
    {
        if (num % 2 == 0)
            zeroes++;
        else
            ones++;
    }
    if (zeroes == n || ones == n)
        cout << "0\n";
    else if (ones % 2 == 1)
        cout << zeroes << "\n";
    else
        cout << min(zeroes, ones / 2) << "\n";
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