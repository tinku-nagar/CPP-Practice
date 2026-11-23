#include<iostream>
#include<math.h>
using namespace std;

int main () {
      int n;
      cout<<"Enter number: ";
      cin>>n;

      int rem, ans = 0, i = 0;
      while(n>0) {
            // remainder
            rem = n%10;
            // divide the number
            n /= 10;
            //answer
            ans = rem*pow(2,i) + ans;    
            i++;
      }
      cout<<ans;
}