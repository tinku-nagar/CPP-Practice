#include<iostream>
using namespace std;

int main() {
    //Input.
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    //bubble-sort --> Descending order.
    for(int i = n-2; i>=0; i--)
    {
        bool swapped = false;
        for(int j = 0; j<=i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }

    //Output.
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}