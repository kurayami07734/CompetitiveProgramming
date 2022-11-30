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

// my logic was correct 
// I was taking input for another variable p after n 
// sedlyf

void solve()
{
    ll i{0}, j{0}, p{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;
    int posBeg{-1}, posEnd{-1};
    int num{0};
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == 1)
            posBeg = i;
        if (num == n)
            posEnd = i;
    }
    ll left = posBeg;
    ll right = n - 1 - posEnd;
    ll minstep = left + right;
    if (posBeg > posEnd)
        minstep--;
    cout << minstep << "\n";
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