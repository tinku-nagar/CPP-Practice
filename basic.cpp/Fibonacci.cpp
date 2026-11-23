#include<iostream>
using namespace std;

int main() {
      int n;
      cout<<"Enter Number: ";
      cin>>n;

      int n1 = 0,  n2 = 1, newterm;

      cout<<"Fibonacci series: ";
      cout<<n1<<", "<<n2<<", ";
      for(int i = 1; i<n-1; i++) {
            newterm = n1 + n2;
            n1 = n2;
            n2 = newterm;
            cout<<newterm;
            if(i == n-2) {
                  cout<<".";
                  break;
            }
            cout<<", ";
      }
}