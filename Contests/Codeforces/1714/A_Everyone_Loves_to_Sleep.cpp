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
    ll i{0}, H{0}, M{0}, m{0}, n{0}, h{0}, y{0}, z{0};
    cin >> n >> H >> M;
    ll minH{INT_MAX}, minM{INT_MAX};
    for (i = 0; i < n; i++)
    {
        cin >> h >> m;
        int diffH, diffM;
        diffM = m - M;
        diffH = h - H;
        if (diffM < 0)
        {
            diff
        }
    }
    cout << minH << " " << minM << "\n";
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