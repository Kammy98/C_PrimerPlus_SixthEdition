#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int trans=12;
    int tall;
    cout<< "Enter your height (use inches) :___\b\b\b";
    cin>>tall;
    int ft=tall/trans;
    int in=tall%trans;
    cout<<"WOW,you are "<<ft<<" feet and " <<in<<" inches tall! ";
    return 0;
}
