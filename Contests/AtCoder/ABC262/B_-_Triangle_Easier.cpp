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
    cin >> n >> m;
    if(m < 3)
    {
        cout << 0 << "\n";
        return;
    }
    vector<vector<int>> adjList(n + 1);
    for (i = 0; i < m; i++)
    {
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    for(auto nodes : adjList)
    {
        for(int node : nodes)
        {
            
        }


    }
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