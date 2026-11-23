#include<iostream>
using namespace std;

int main() {

    //Input
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    //selection sort - repeatedly sort elements in array.
    for(int i = 0; i<n-1; i++)
    {
        int index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }  
        swap(arr[i], arr[index]);
    }

    //Output.
    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}