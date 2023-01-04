#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<"a&b : "<<(a&b)<<endl;
    cout<<"a|b : "<<(a|b)<<endl;
    cout<<"~a : "<<(~a)<<endl;
    cout<<"a^b(XOR) : "<<(a^b)<<endl;

    //Right and Left Shift
    cout<< (17>>1) <<endl; //right shift
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;  //left shift
    cout<< (19<<2) <<endl;
}