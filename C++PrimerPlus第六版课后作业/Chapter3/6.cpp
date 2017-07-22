#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long km , L ; //用公里和升做的这道题
    cout<<"依次输入 里程 → 空格 → 耗油量：";
    cin>>km>>L;

    long double km_100L;
    km_100L = (long double)km/L *100;
    cout<<"你的耗油量为："<<km_100L<<"升每100公里。\n";

    return 0;
}
