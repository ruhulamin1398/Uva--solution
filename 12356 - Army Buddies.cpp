#include<bits/stdc++.h>
using namespace std;
int l[100010], r[100010];
int main()
{
    int n, q, left, right;
    while(cin>>n>>q)
    {
        if(!n && !q) return 0;
        for(int i=1;i<=n;i++)
            l[i]=i-1, r[i]=i+1;
        r[n]=0;
        while(q--)
        {
            cin>>left>>right;
            l[r[right]] = l[left];
            r[l[left]] = r[right];
            if(l[left]) cout<<l[left]<<" ";
            else cout<<"* ";
            if(r[right]) cout<<r[right]<<endl;
            else cout<<"*"<<endl;
        }
        cout<<"-"<<endl;
    }
    return 0;
}
