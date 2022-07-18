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

bool isVowel(char c)
{
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}
bool isEasyToPronounce(string s)
{
    int count{0}, maxCount{0};
    for (int i = 0; i < s.size(); i++)
    {
        if(isVowel(s[i]))
            count = 0;
        else
            count++;
        maxCount = max(maxCount, count);
    }
    return maxCount < 4;
}

void solve()
{
    ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
    cin >> n;
    string s;
    cin >> s;
    if (isEasyToPronounce(s))
        cout << "YES\n";
    else
        cout << "NO\n";
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