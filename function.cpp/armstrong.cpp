#include<iostream>
#include<math.h>
using namespace std;

int count(int n) 
{
    int count = 0;
    while(n>0)
    {
        n /= 10;
        count++;
    }
    return count;
} 

bool armstrong(int a, int b)
{
    int n = a;
    int rem, ans = 0;
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        ans += round(pow(rem, b));
    }
    if(ans == a) {
        return 1;
    } else if (ans != a) {
        return 0;
    }
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int Count = count(n);
    cout<<"Armstrong no. status: "<<armstrong(n, Count);
}