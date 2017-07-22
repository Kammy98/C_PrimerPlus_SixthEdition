#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int toMinute=60;
    const int toHour=60*toMinute;
    const int toDay=24*toHour;

    long long seconds;
    cin>>seconds;

    int d,h,m,s;
    d=seconds/toDay;
    h=seconds%toDay/toHour;
    m=seconds%toHour/toMinute;
    s=seconds%toMinute;

    cout<<seconds<<" seconds = "
        <<d<<" days "
        <<h<<" hours "
        <<m<<" minutes "
        <<s<<" seconds ";

    return 0;
}
