#include<iostream>
using namespace std;

int main () {
    int a, b;
    cout<<"Enter position(a b): ";
    cin>>a>>b;

    int total = 0;
    total = min(8-a, 8-b) + min(8-a, b-1) + min(a-1, b-1) + min(a-1, 8-b);
    cout<<"total moves: "<<total;
}