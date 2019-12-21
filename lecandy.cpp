#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
		cin>>t;

	while(t--){
	int flag=0;
	int n,c;
	int sum=0;
	cin>>n>>c;
	int a;
	for(int i=0;i<n;i++){
	    cin>>a;
	    sum=sum+a;
	}

	if(c>=sum)
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;
	}
	return 0;
}
