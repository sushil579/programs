//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/remove-duplicates-3/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n =s.length();
    int a[26]={0};
    for(int i=0;i<n;i++){
        if(a[s[i]-97]==0){
            a[s[i]-97]=1;
            cout<<s[i];
        }
           
    }
    return 0;
}
