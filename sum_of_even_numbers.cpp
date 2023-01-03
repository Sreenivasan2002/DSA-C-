#include <iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"Enter a number to print digits upto that: ";
    cin>>n;
    i=1;
    sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"Sum of even numbers: "<<sum<<endl;
}