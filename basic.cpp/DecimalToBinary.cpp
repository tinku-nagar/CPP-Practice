#include<iostream>
#include<math.h>
using namespace std;

int main () {
      int n;
      cout<<"Enter number: ";
      cin>>n;

      int remainder, ans = 0, mul = 1;
      while(n>0){
            remainder = n%2;    
            n = n/2;                      //quotient
            ans = remainder*mul + ans;
            mul *= 10;                          
      }
      cout<<ans;
}