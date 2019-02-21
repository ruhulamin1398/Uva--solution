#include <bits/stdc++.h>
using namespace std;
long long maxNumber = 9876543210LL;

bool isNoRepeated(long long n)
{
    bool ck [12]= {false};
    int i, cnt = 0;
    while (n!=0)
    {
        i = n % 10;
        n = n/ 10;
        if( ck[i]==false)
            ck[i]=true;
        else if( ck[i]==true)
            return false;
    }
    return true;
}

int main()
{
    long long s1, s2, n;
    int t;
    cin>>t;

    while (t--)
    {

        cin>>n;
        for (s2 = 1; s2 <= maxNumber; ++s2)
        {

            if(isNoRepeated(s2) )
            {
                s1 = n * s2;
                if (s1 > maxNumber)
                    break;
                if (isNoRepeated(s1))
                    cout<<s1<<" / "<<s2<<" = "<<n<<endl;
            }
        }
        if (t)
            cout<<endl;
    }
    return 0;
}
