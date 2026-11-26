#include<iostream>
using namespace std;

//binary search function call.
int binarysearch(int n, int x, int *arr);

int main ()
{
    //INPUT.
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int x;
    cout<<"Enter the element: ";
    cin>>x;

    //OUTPUT
    cout<<"Element found at index: "<<binarysearch(n, x, arr);

    return 0;
}

//binary search function definition.
int binarysearch(int n, int x, int *arr)
{
    int mid, start = 0, end = n-1;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid] == x)
            return mid;
        else if (arr[mid]>x)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}