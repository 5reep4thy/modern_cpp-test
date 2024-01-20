#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 7;
class mod_ll {
  public:
  ll x;
  mod_ll(ll in_x): x{in_x} {}
  mod_ll(mod_ll& in_x) {
    x = in_x.x;
  }

  mod_ll& operator+(mod_ll a) {
    x += a.x % MOD;
    return *this;
  }
  mod_ll& operator=(mod_ll&& a) {
    x = std::move(a.x);
    return *this;
  }

};
