#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5] = {5 9 7 2 6};

    sort(A.begin(),A.end(), greater<>);

    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}