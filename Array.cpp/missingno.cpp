#include<iostream>
using namespace std;
int main() {

    //input size of array.
    int n;
    cout<<"Number of elements: ";
    cin>>n;

    //input array.
    int arr[n];
    for(int i = 0; i<n-1; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    
    //Calculate sum of elements of array.
    for(int i = 0; i<n-1; i++)    
    sum = sum+arr[i];

    //Calculate sum of n numbers.
    int ans = n*(n+1)/2;

    //By subtracting the values, we get our answer.
    cout<<"Missing No.: "<<ans - sum;

    return 0;
}