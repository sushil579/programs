//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/pikachu-and-the-game-of-strings-1-8c22a8ce/

#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s,t;
cin>>s>>t;
int count=0;
int diff;
for(int i=0;i<n;i++){
    diff=(t[i]-s[i]+26)%26;
    if(diff>=13){
        diff-=13;
        count++;
    }
    count=count+diff; 
}
cout<<count<<endl;
}
