#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long world_p , US_p ;
    cout<<"先输入世界人口，敲空格后输入美国人口：";
    cin>>world_p>>US_p;
    long double percentage;
    percentage = (long double)(US_p)/world_p *100;
    cout<<"the percentage is "<<percentage<<"%.\n";
    return 0;
}
