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
    ll i{0}, j{0}, n{0};
    ll sum{0}, count{0};
    cin >> n;
    vll v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];

    for (i = 0; i < n; i++)
    {
        if (v[i] == 1)
            count++;
        else
        {
            sum += (count) * (count + 1) / 2;
            count = 0;
        }
    }
    sum += (count) * (count + 1) / 2; 
    cout << sum << "\n";
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