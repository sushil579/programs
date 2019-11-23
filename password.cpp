//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/password-1/
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
	    cin>>s[i];
	}
	for(int i=0;i<n-1;i++){
	    for(int j=1;j<n;j++){
	        if(s[i].length()==s[j].length()){
	            string c=s[j];
	            reverse(c.begin(),c.end());
	            if(s[i]==c){
	                int a=s[i].length();
	                cout<<a<<" "<<s[i][a/2];
	                return 0;
	                
	            }
	        }
	    }
	}
}
