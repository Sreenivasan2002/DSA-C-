#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int bin;
    int ans =0;
    cin>>bin;

    int i=0;
    while (bin != 0)
    {
        int bit,decimal;
        bit = bin % 10;
        decimal = bit * pow(2,i);
        ans = ans+decimal;

        i=i+1;
        bin = bin / 10;
    }


    cout<<"Decimal is "<<ans<<endl;
    

    
}