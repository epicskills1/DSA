#include <iostream>
using namespace std;
#include<math.h>

int main() {
  
    int n;
    cout<<"Enter a binary number"<<endl;
    cin>>n;
int ans; int i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
        ans=ans+pow(2,i);
        }
        n/=10;
        i++;
        
    }
    cout<< "The Equivalent Decimal Number is"<<ans<<endl;

    return 0;
}
