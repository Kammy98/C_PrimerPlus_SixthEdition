#include <iostream>
#include <cstdio>

using namespace std;

void combine(int a,int b)
{
    cout<<a<<":"<<b<<endl;
}


int main()
{
    int hour,minute;
    cin>>hour>>minute;
    combine(hour,minute);
    return 0;
}
