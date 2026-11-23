#include<iostream>
using namespace std;

int main ()
{
    //Input
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    //Bubble-sort.
    for(int i = n-2; i>=0; i--)
    {
        bool swapped=0;
        for(int j = 0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                swapped = 1;
            }
        }
        if(swapped = 0)
        {
            break;
        }
    }

    //Output.
    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}