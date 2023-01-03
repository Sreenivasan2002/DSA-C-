#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number to check prime or not: ";
    cin>>n;
    
    i=2;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is a  not a prime number"<<endl;
            return 0;
        }
        i=i+1;
    }
    cout<<n<<" is a prime number";









}