#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long double L ;
    cout<<"����ÿ100����ĺ�������������";
    cin>>L;

    long double miles = 62.14 ,
                gallon = L/3.875 ;
    int mpg = miles/gallon ;
    cout<<"��ĺ�����Ϊ��"<<mpg<<"mpg��\n";

    return 0;
}
