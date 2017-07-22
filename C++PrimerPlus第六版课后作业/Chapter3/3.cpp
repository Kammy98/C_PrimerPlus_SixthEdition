#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const double trans = 60.0;
    int d,m,s;
    double degree;
    cout<<"Enter a latitude in degrees, minutes and seconds.\n"
        <<"First, enter the degrees:";
    cin>>d;
    cout<<"Enter the minutes of arc:";
    cin>>m;
    cout<<"Enter the seconds of arc:";
    cin>>s;
    degree = d + m/trans + s/trans/trans;
    cout<<"前面那一串 = "<<degree<<" degrees.\n";
    return 0;
}
