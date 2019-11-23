//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/make-the-cheapest-palindrome-1/description/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i,b,acost,bcost,j;
  long long int cost=0;
  char str[100001];
  scanf("%d",&t);
  for(i=0;i<=t-1;i++)
  {cost=0;  
  cin>>str;
  b=str.length();
  cin>>acost,bscost;
  for(j=0;j<=(b/2)-1;j++)
  {
    if(str[j]=='/' and str[b-j-1]=='/')
    {
       cost=cost+2*min(acost,bcost);
    }
    else if((str[j]=='/' and str[b-1-j]=='a') or (str[j]=='a' and str[b-1-j]=='/'))
    {
       cost+=acost;
    }
    else if((str[j]=='/' and str[b-1-j]=='b') or (str[j]=='b' and str[b-1-j]=='/'))
    {
      cost+=bcost;
    }
    else if((str[j]=='a' and str[b-1-j]=='b') or (str[j]=='b' and str[b-1-j]=='a'))
    {
      cost=-1;
      break;
    }
   }
    cout<<cost;
}
    return 0;
}
