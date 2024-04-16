#include <iostream>
using namespace std;
#include<math.h>

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter a decimal number"<<endl;
    cin>>n;
int ans; int i=0;
    while(n!=0){
        int bits=n&1;
        ans=(bits*pow(10,i))+ans;
        n>>=1;
        i++;
        
    }
    cout<< "The Equivalent Binary Number is"<<ans<<endl;

    return 0;
}
