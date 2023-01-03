#include<iostream>
using namespace std;

int main(){
    // A-65
    //a-97
    //0-48

    char ch;
    cout<<"Enter one character (alphabet or number)";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Its a uppercase alphabet";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Its a lowercase alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Its a Digit";
    }
    return 0;
}