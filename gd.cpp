/*
You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.

Input:
First line contains one integer, T, number of test cases.
First line of each test case contains two integer, N and X, number of bottles and capacity of the container.
Second line of each test case contains N space separated integers, capacities of bottles.

Output:
For each test case print the maximum number of bottles you can fill.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        long long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n;i++){
            if(x-a[i]>0){
                x=x-a[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
