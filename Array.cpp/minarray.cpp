#include<iostream>
#include <climits>
using namespace std;

int main () 
{
    int arr[] = {34, 43, 33, 25, 3, 65, 45};
    
    int ans = INT_MAX;
    for(int i = 0; i<7; i++)
    {
        if(arr[i]<ans) {
            ans = arr[i];
        }
    }
    cout<<"Smallest element: "<<ans;

    return 0;
}