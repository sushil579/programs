//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/description/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
    cin>>n;
    
     int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int next_greater[n], next_smaller[n];
    
    stack<int> s1;
 	for (int i=n-1; i>=0; i--)
    {
		while (!s1.empty() && a[s1.top()] <= a[i] )
            s1.pop();
        if (!s1.empty())
            next_greater[i] = s1.top();

        else
            next_greater[i] = -1;
        s1.push(i);
    }
    
    stack<int> s2;
 	for (int i=n-1; i>=0; i--)
    {
        while (!s2.empty() && a[s2.top()] >= a[i])
            s2.pop();
		if (!s2.empty())
            next_smaller[i] = s2.top();
		else
            next_smaller[i] = -1;
        s2.push(i);
    }
    
    
    for (int i=0; i< n; i++)
    {

	    if (next_greater[i] != -1 && next_smaller[next_greater[i]] != -1)
            cout << a[next_smaller[next_greater[i]]] <<" ";
		else
            cout<<-1<<" ";
    }
    return 0;
}
