#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  N,value;
    vector<int> v;
    vector<int> ::iterator low,up;

    cin>>N;
    for( int i =1 ; i<=N ; i++)
    {
        cin>>value;
        v.push_back(value);
    }

    int Q;
    cin>>Q;
    while(Q--)
    {
        cin>>value;
        low = lower_bound(v.begin(), v.end(), value);
        up  = upper_bound(v.begin(), v.end(), value);
        if(low==v.begin())
            cout<<'X'<<" ";
        else
            cout<<*--low<<" ";
        if(up==v.end())
            cout<<"X"<<endl;
        else
            cout<<*up<<endl;
    }
    return 0 ;
}
