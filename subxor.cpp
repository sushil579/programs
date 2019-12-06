#include <iostream>
using namespace std;

int main()
{
    int n , summ=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        summ = summ ^ a[i];
    }
    if(summ==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}
