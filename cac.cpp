//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/chandu-and-consecutive-letters/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string ans;
    char s[100];
    int t,n;
    cin>>t;
    while(t--){
        cin>>s;
        n=strlen(s);
        ans=s[0];
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])
            ans+=s[i];
        }
    cout<<ans<<endl;

}
return 0;
}
