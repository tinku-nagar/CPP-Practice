#include<iostream>
using namespace std;

char converter(char ch);

int main () 
{
    char ch;
    cout<<"Lower case:12 ";
    cin>>ch;
    cout<<"Upper case: "<<converter(ch);
}

char converter(char ch) 
{
    char caps = ch-'a'+'A';         //Logic to convert lower case to uppercase
    return caps; 
}