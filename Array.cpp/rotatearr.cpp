#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr1[n];
    for(int i = 0; i<n; i++)
    cin>>arr1[i];
    
    int arr2[n];
    for(int i = 0; i<n-1; i++)
    {
        arr2[i+1] = arr1[i];
    }
    arr2[0] = arr1[n-1];
    
    for(int i = 0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}