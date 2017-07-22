#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int toInch=12;
    const double toMeter=0.0254;
    const double toPound=2.2;

    int ft,in;
    double weight;
    cout<<"Enter your height in feet and then in inches (use space instead of the dot) : _.__\b\b\b\b";
    cin>>ft>>in;
    cout<<"Enter your weight in pounds:___\b\b\b";
    cin>>weight;

    int meter = ft*toInch*toMeter + in*toMeter;
    double kg = weight/toPound;
    double BMI = kg/(meter*meter);
    cout<<"WOW,Your body mass index (BMI) is "<<BMI<<" !\n";

    return 0;
}
