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
#define iscn(num)             scanf("%d",&num);

using namespace std;
// void FAST_IO();



map<string, int> M;

void generate_positions(){
    queue<string> Q;
    for(char c='a';c<='z';c++) Q.push(string(1,c));
    
    string s;
    
    int cont=1;    
    
    while(!Q.empty()){
        s=Q.front();
        Q.pop();
        
        M[s]=cont;
        cont++;
        
        if(s.size()==5) continue;
        
        for(char c=s[s.size()-1]+1;c<='z';c++) Q.push(s+c);
    }
}




int main()
{
      _time_
 // FAST_IO();

 ////////////////////////////////////////////////////////



  generate_positions();
    
    string s;
    map<string, int> :: iterator it;
    
    while(cin>>s){
        it=M.find(s);
        if(it==M.end()) cout<<0<<endl;
        else cout<<it->second<<endl;
    }
    





//////////////////////////////////////
  // _show_
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
