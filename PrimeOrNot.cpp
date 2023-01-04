#include<iostream>
using namespace std;
int main(){
   int n,i;
   cin>>n;

   for(i=2;i<=n-1;i++){
    if(n%i==0){
        cout<<n<<" not a prime number"<<endl;
        break;
    }
    else{
        cout<<n<<" is a Prime number"<<endl;
        break;
    }
   
   
   
   }
}