#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    int arr[n];
    arr[0] = 0;       //first term;
    arr[1] = 1;       //second term;

    for(int i = 2; i<n; i++)
    arr[i] = arr[i-1]+arr[i-2];
    
    cout<<n<<"th term: "<<arr[n-1];

    return 0;
}