#include<iostream>
using namespace std;

int main() {

    int check;
    char ch;
    
    while(ch != '0') {
        cout<<"Enter character: ";
        cin>>ch;
        if(ch == '0') {
            continue;
        }
        check = ch;
        cout<<"ASCII value: "<<check<<"\n"<<"(enter 0 to end program)\n";
    }

    cout<<"Thank You";

}