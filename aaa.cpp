#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
#define sza(a) ((int)((a).size()))
#define char unsigned char
using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
// g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< %
// && ./%<
 
///////////////////////////////////
void solve() {
    int nn; cin >> nn;
 
    map<int, int> mm;
    for (int i = 0; i < nn; ++i) {
        int a; cin >> a;
        mm[a]++;
    }
 
    int lar_val = 0;
    for (auto const&x : mm) lar_val = max(lar_val, ((int)x.second));
 
    int b = mm.size();
 
    cout << max(min(lar_val-1, b), min(b-1, lar_val)) << endl;
}
 
///////////////////////////////////
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE // the attribute is to ensure that we dont get a warning
  __attribute__((unused)) FILE *UNUSED__1 = freopen("out", "w", stdout);
#endif
  // The place where the code runs
 
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    solve();
  }
 
  // OR JUST
 
  // solve();
 
  // /
#ifdef ONPC
  cerr << " \nFinished in " << clock() * 1.0 / CLOCKS_PER_SEC << "s";
#endif
  return 0;
}
