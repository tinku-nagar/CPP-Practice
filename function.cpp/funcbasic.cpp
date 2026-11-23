#include<iostream>
using namespace std;

bool prime(int n);
int fact(int n);

int main() {
    int a, b;
    cout<<"Enter two numbers(a,b): ";
    cin>>a>>b;
    cout<<"a is prime: "<<prime(a)<<endl;
    cout<<"factorial of a: "<<fact(a)<<endl;

    cout<<"b is prime: "<<prime(b)<<endl;
    cout<<"factorial of b: "<<fact(b)<<endl;

    cout<<"b-a is prime: "<<prime(b-a)<<endl;
    cout<<"factorial of b-a: "<<fact(b-a)<<endl;

}

bool prime(int n) {
    if(n<2)
    return 0;

    for(int i = 2; i<n; i++)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;
}

int fact(int n) {
    int x = 1;
    for(int i = 1; i<=n; i++)
    {
        x = i*x;
    }
    return x;
}