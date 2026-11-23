#include<iostream>
using namespace std;

bool rect(int a, int b, int c, int d)
{
    if((a==b && c==d)||(a==c && b==d)||(a==d && b==c))
    return 1;
    else
    return 0;
}

int main() {
    int a, b, c, d;
    cout<<"Enter four sides: ";
    cin>>a>>b>>c>>d;

    cout<<"Rectangle status: "<<rect(a, b, c, d);
}