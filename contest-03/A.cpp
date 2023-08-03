#include <iostream>
#include <cmath>
#define sz(x) ((int)x.size())
#define fst first
#define snd second
#define pb push_back

using namespace std;

int solve(pair<int,int> A,pair<int,int> B,pair<int,int> F){

    bool coincideX = A.first == B.first;
    bool coincideY = A.second == B.second;
    int res;

    if((coincideX && B.fst == F.fst) || (coincideY && B.second == F.second))
    {
        if(coincideX)
        {
            res = abs(A.snd-B.snd);
            res = F.snd > min(A.snd,B.snd) && F.snd <max(A.snd,B.snd) ? res + 2  : res;
        }else if(coincideY) {
            res = abs(A.fst - B.fst);
            res = F.fst > min(A.fst,B.fst) && F.fst <max(A.fst,B.fst) ? res + 2 : res;
        }
    }else
    {
        res= abs(A.first-B.first) + abs(A.second-B.second);
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,ans;
    pair<int,int> A,B,F;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>A.first >> A.second;
        cin>>B.first >> B.second;
        cin>>F.first >> F.second;

        ans = solve(A,B,F);

        cout << ans<<"\n";
    }

    return 0;
}