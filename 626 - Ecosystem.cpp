#include<bits/stdc++.h>
#define endl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%I64d",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define is(num)             scanf("%d",&num);
#define ip(a)                 printf("%d\n",a);
#define ip2(a,b )             printf("%d %d\n",a,b);
#define ip3(a,b,c)            printf("%d %d %d\n",a,b,c);

using namespace std;
void FAST_IO();





int main()
{
      _time_
  FAST_IO();

 ////////////////////////////////////////////////////////




int n, g[100][100];
    int i, j, k;
    vector<int> gv[100];
    while( scanf("%d",&n) == 1) {
        for(i = 0; i < n; i++) {
            gv[i].clear();
            for(j = 0; j < n; j++) {
                is(g[i][j]);
                if(g[i][j])
                    gv[i].pb(j);
            }
        }
        int time = 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < gv[i].size(); j++) {
                for(k = 0; k < gv[gv[i][j]].size(); k++) {
                    if(gv[gv[i][j]][k] != i && g[gv[gv[i][j]][k]][i] == 1) {
                        if((i+1 < gv[i][j]+1 && gv[i][j]+1 < gv[gv[i][j]][k]+1) ||
                            (i+1 > gv[i][j]+1 && gv[i][j]+1 > gv[gv[i][j]][k]+1) )
                                {
                                    ip3( i+1, gv[i][j]+1, gv[gv[i][j]][k]+1);
                                     time++;
                                }
                    }
                }
            }
        }
        printf("total:%d\n", time);
        puts("");
}



//////////////////////////////////////
//  _show_
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(2);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}