#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long world_p , US_p ;
    cout<<"�����������˿ڣ��ÿո�����������˿ڣ�";
    cin>>world_p>>US_p;
    long double percentage;
    percentage = (long double)(US_p)/world_p *100;
    cout<<"the percentage is "<<percentage<<"%.\n";
    return 0;
}
