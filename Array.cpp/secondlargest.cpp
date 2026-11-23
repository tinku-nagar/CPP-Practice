#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {45, 44, 34, 77, 45};
    
    int ans = -1;                // if there is no second largest in array, program returns -1.
    for(int i = 0; i<3; i++)
    {
        if(arr[i]>=ans)
        {
            ans = arr[i];
        }
    }

    int ans2 = -1;
    for(int i = 0; i<3; i++)
    {
        if(arr[i]!=ans)
        {
            ans2 = max(ans2, arr[i]);
        }
    }

    cout<<ans2;

    return 0;
}