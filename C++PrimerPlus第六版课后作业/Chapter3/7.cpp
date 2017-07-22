#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long double L ;
    cout<<"输入每100公里的耗油量（升）：";
    cin>>L;

    long double miles = 62.14 ,
                gallon = L/3.875 ;
    int mpg = miles/gallon ;
    cout<<"你的耗油量为："<<mpg<<"mpg。\n";

    return 0;
}
