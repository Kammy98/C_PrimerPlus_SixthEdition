#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long km , L ; //�ù���������������
    cout<<"�������� ��� �� �ո� �� ��������";
    cin>>km>>L;

    long double km_100L;
    km_100L = (long double)km/L *100;
    cout<<"��ĺ�����Ϊ��"<<km_100L<<"��ÿ100���\n";

    return 0;
}
