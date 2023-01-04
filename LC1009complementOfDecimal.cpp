#include<iostream>
using namespace std;

int main(){
     int n;
    cin>>n;

    int m=n;
    int mask=0;

    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans  = ~n & mask;
    cout<<ans<<endl;
   

        
    
}




















    // int rev_ans=0;
    // while(n!= 0){
    //     int bit = n&1;
    //     rev_ans = (rev_ans*10) + bit;
    //     n=n>>1;
    // }
    // cout<<"rev array of "<<n<<" is"<<rev_ans<<endl;


    // int ans =0;
    // while (rev_ans!=0)
    // {
    //     int digit = rev_ans%10;

    //     if(digit==1){
    //         digit=0;
    //     }
    //     else{
    //         digit = 1;
    //     }
    //     ans = ans*10  + digit;
    //     rev_ans=rev_ans/10;
    // }
    // cout<<"complement binary of "<<rev_ans<<" is "<<ans<<endl;

    // //binary to decimal

    // int bin = ans;
    // int i=0, final_ans =0;
    // while(bin!=0){
    //     int bit,dec;
    //     bit =bin%10;
    //     dec = (bit* pow(2,i) ) ;
    //     final_ans = final_ans+dec;


    //     bin = bin/10;
    //     i=i+1;
    // }

    // cout<<final_ans<<endl;







    

