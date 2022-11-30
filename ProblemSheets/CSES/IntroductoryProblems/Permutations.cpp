#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define vi std::vector<int>
#define vd std::vector<double>
#define repi(a, b, c) for (int i = (int)a; i < (int)b, i += (int)c)
#define repd(a, b, c) for (int i = (int)a; i > (int)b; i -= (int)c)

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
using namespace std;

int main()
{

    fastio;
    int n{0};
    cin >> n;
    if (n == 1)
        cout << "1\n";
    else if (n <= 3)
        cout << "NO SOLUTION\n";
    else
    {
        vi v;
        for (int i = 2; i <= n; i+=2)
            v.push_back(i);
        for (int i = 1; i <= n; i+=2)
            v.push_back(i);
        for(int num : v)
            cout << num << " ";
    }

    return 0;
}