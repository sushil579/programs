//cnote
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    int p[n],c[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i]>>c[i];
	    }
	    int flag =0;
	    int rem=x-y;
	    for(int i=0;i<n;i++){
            if(rem<=p[i] and k>=c[i]){
                flag=1;
                break;
            }
	    }
	    if(flag==1){
	        cout<<"LuckyChef"<<endl;
	    }
	    else
	        cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
