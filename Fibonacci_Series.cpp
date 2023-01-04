#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,n;
    cin>>n;
    n1=0;
    n2=1;
    cout<<n1<<" "<<n2<<" ";
    

    for(int i=0;i<=n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";

    }
    





}