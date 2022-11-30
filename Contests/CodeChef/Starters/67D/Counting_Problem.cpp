#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using vi = std::vector<int>;
using vd = std::vector<double>;
using vll = std::vector<ll>;
const int MOD = 1e9 + 7;
using namespace std;

#define fastio \
  std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
#define all(x) x.begin(), x.end()

void solve() {
  ll i{0}, j{0}, k{0}, m{0}, n{0}, x{0}, y{0}, z{0};
  cin >> n;
  vi v(n, 0);
  ll odds{0}, evens{0};
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x % 2) k++;
  }
  if (k == 0 || k % 2)
    cout << "NO\n";
  else
    cout << "YES\n";
}
int main() {
  fastio;
  int T{0};
  cin >> T;
  // cin >> n;
  while (T--) {
    solve();
  }
  return 0;
}