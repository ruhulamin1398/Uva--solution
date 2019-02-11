#include<bits/stdc++.h>
using namespace std;
int main()
{
map < string, string > dictionary;
map < string, string > :: iterator itr;
string eng,foregin ,  line ;

while ( getline(cin,line))
{
if ( line=="")
{break ;}
istringstream sin (line);
sin>>eng>>foregin;

dictionary.insert(pair <string , string > (foregin, eng));

}

while ( cin>>foregin)
{
if( foregin=="")
return 0 ;
itr=dictionary.find(foregin);
if( itr!=dictionary.end())
cout<<itr->second<<endl;
else cout<<"eh"<<endl;


}



return 0 ;
}
