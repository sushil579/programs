//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/

#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
  string s1;
  string s2;
  int count=0;
  cin>>s1;
  cin>>s2;
  for(int i=0;s1[i]!='\0';i++)
  {
    if(s2[i]-96<s1[i]-96)
      count++;
  }
  if(count==0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  return 0;
 }
