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

// Was very close to the solution 


void solve()
{
    int i{0}, j{0}, singles{0}, n{0}, x{0}, y{0}, z{0}, groups{0};
    unordered_map<int, int> m;
    int maxHeight = INT_MIN, grp3 = 0;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        maxHeight = max(v[i], maxHeight);
    }
    for (auto freq : m)
    {
        if (freq.second == 1)
            singles++;
        if (freq.second > 2)
            grp3++;
    }
    if (singles == 0)
        cout << 0 << "\n";
    else if (singles > 1)
        cout << (singles + 1) / 2 << "\n";
    else if (m[maxHeight] == 1 and grp3 < 1)
        cout << 2 << "\n";
    else
        cout << 1 << "\n";
}
int main()
{
    fastio;
    int T{0};
    cin >> T;
    // cin >> n;
    while (T--)
        solve();

    return 0;
}