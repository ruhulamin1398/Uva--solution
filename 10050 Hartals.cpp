#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tastCase;
    cin>>tastCase;
    while (tastCase -- )
    {
        int totalDay ;
        cin>>totalDay ;
        int day[3651];
        for( int i =0 ; i<= totalDay ; i++)
        {
            day[i]=0;
        }

        int totalParty;
        cin>>totalParty;
        while ( totalParty--)
        {
            int hortal;
            cin>> hortal;
        //   cout<<hortal<<endl;
            for( int i = hortal ; i<= totalDay ; i+=hortal )
            {
                day[i]= 1;
            }



        }

          for( int i = 6, j= 7 ; i<= totalDay ; i+=7, j+=7 )
          {
              day[i]=0 ;
              day[j]= 0 ;
          }
   int result =0 ;
          for( int i = 1 ; i<= totalDay ; i++ )
          {
              if( day[i]==1)
             result++;
          }
        cout<<result<<endl;


    }




    return 0 ;
}
