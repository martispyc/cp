#ifdef ONPC
    #define _GLIBCXX_DEBUG
#endif
#include<bits/stdc++.h>
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
// g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%<



///////////////////////////////////
int N = 0;

void solve2(int m, int c, int a) {

}

void solve() {

    int i; cin >> i;

    solve2(i,0,0);

    cout << N;

}
///////////////////////////////////



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("out", "w", stdout);
// #endif
// #ifdef ONPC
//      cerr << "\n";
// #endif
    // The place where the code runs 
    
    // int t;
    // cin >> t;
    // for (int i = 1; i <= t; i++) {
    //     solve();
    // }

    // OR JUST

    solve();

    // /
#ifdef ONPC
    cerr << " \nFinished in " << clock() * 1.0 / CLOCKS_PER_SEC << "s";
#endif
    return 0;
}
