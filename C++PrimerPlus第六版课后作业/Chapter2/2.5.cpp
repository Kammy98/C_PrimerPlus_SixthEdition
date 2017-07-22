#include <iostream>
#include <cstdio>

using namespace std;

double trans(double c)
{
    double f = 1.8*c+32.0;
    return f;
}

int main()
{
    cout<<"Enter a Celsius value: ";
    double cv,fv;
    cin>>cv;
    fv = trans(cv);
    cout<<cv<<" degrees Celsius is "<<fv <<" degrees Fahrenheit.\n";
    return 0;
}
