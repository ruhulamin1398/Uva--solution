#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int a;
    while(cin>>a)
    {
        v.push_back(a);
        sort(v.begin(),v.end());
        int m=v.size();
        cout<<(v[(m-1)/2]+v[m/2])/2<<endl;
    }
    return 0;
}
