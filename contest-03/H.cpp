#include <iostream>
#define fst first
#define snd second
using namespace std;
typedef long long ll;
using l_l = pair<ll,ll>;


l_l aux(l_l p){
    ll a = p.fst;
    ll b = p.snd;
    while(b>=2*a || a>=2*b){
        if(a==0 || b==0) return make_pair(a,b);
        if(a>=2*b){
            a = a % (2*b);
        }else if(b>=2*a){
            b = b % (2*a);
        }
    }
    return make_pair(a,b);
}

int main ()
{
  ll a, b;
  cin >> a >> b;
  l_l res = aux (make_pair (a, b));
  cout << res.fst << " " << res.snd;
  return 0;
}