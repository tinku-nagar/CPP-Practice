#include<iostream>
using namespace std;

int main ()
{
    //Input.
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    //Insertion-sort --> Descending order.
    for(int i = 1; i<n; i++)
    {
        for(int j = i; j>0; j--)
        {
            if(arr[j-1]<arr[j])
            swap(arr[j-1], arr[j]);
            else
            break;
        }
    }

    //Output.
    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}