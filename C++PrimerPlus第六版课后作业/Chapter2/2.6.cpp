#include <iostream>
#include <cstdio>

using namespace std;

double trans(double ly)
{
    double f = ly*63240;
    return f;
}

int main()
{
    cout<<"Enter the number of light years: ";
    double cv,fv;
    cin>>cv;
    fv = trans(cv);
    cout<<cv<<" light years = "<<fv <<" astronomical units.\n";
    return 0;
}
