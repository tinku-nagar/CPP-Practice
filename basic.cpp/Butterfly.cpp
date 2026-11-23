#include<iostream>
using namespace std;

int main () 
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    //upper wings;
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        cout<<"* ";

        for(int j=2*(n-i); j>=0; j--)
        cout<<"  ";

        for(int j=1; j<=i; j++)
        cout<<"* ";

        cout<<endl;
    }

    //middle line;
    for(int i = 1; i<=2*n+1; i++)
    cout<<"* ";

    cout<<endl;

    //lower wings;
    for(int i = n; i>=0; i--)
    {
        for(int j=1; j<=i; j++)
        cout<<"* ";

        for(int j=2*(n-i); j>=0; j--)
        cout<<"  ";

        for(int j=1; j<=i; j++)
        cout<<"* ";

        cout<<endl;
    }
}