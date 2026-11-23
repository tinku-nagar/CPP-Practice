#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n-1; i++)
    {
        cin>>arr[i];
    }

    int suma = 0;
    for(int i = 0; i<n-1; i++)
    {
        suma = suma + arr[i];
    }
    int sumn = n*(n+1)/2;
    cout<<"Missing No.: "<<sumn-suma;

    return 0;
}