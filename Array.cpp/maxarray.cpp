#include<iostream>
#include<climits>
using namespace std;

int main() 
{
    int arr[] = {44, 54, 54, 567, 454, 3445, 33, 345, 4443, 4543, 332, 976};

    int ans = INT_MIN;
    for(int i = 0; i<12; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }

    cout<<ans;
}