#include <iostream>
using namespace std;
int main()
{
int i,n,k;
cin>>n>>k;
string str;
cin>>str;
str[0]='1';
for(i=1;i<k;i++)
{
  if(str[i]!='0')
  str[i]='0';
  else
  k++;
    
}
cout<<str;
}
