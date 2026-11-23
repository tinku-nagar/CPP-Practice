#include<iostream>
using namespace std;

int fact(int n) 
{
    int fact = 1;
    for(int i = 1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int trail(int n) {
    int count = 0, rem;
    while(n>0)
    {
        rem = n%10;
        n /= 10;
        if(rem == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int factorial = fact(n);
    cout<<"factorial: "<<factorial<<endl;
    cout<<"No. of Zeroes in factorial: "<<trail(factorial);

}