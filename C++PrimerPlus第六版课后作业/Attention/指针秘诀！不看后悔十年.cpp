
//��ݴ����嵥��Ϊ�˽��� ָ�롢���顢�ṹ�� �Ļ��ʹ�ö�д��
//���������룬��Դ�ο���C++PP������������嵥��4.23

#include <iostream>

/*
    ָ��ĺ���֪ʶ��������Ȼ���ʮ�꣡

    ��������ʱ��*��ָ�������[]��ָ�볣�������߶��ܴ�����ָ�����

    �ڱ��ʽ�*��[]������ȥһ��ָ�루ȡֵ��
    �ڱ��ʽ�  &  ��������һ��ָ��

    һ�Ŵ����ӣ�

    int a[4];      ����a��һ��ָ��
    int (*p)[4];   ����p�Ƕ���ָ��
    ���Ա��ʽ�
    p=&a;          ����ָ�븳����ָ�룬��ȷ~
*/

using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01,s02,s03;   //�����������ṹ�����

    s01.year = 1998;                    //�ṹ�� . ��Ա

    antarctica_years_end *pa = &s02;
    pa->year = 1999;                    // ָ�� ��> ��Ա

    antarctica_years_end trio[3];       //һ�����ṹ�塱���͵�����
    trio[0].year = 2003;                //�����ǣ� �ṹ�� . ��Ա
    cout<< trio->year <<endl;           //trio��һ����������ͬʱ�ɵ���һöһ��ָ��

    const antarctica_years_end * arp[3] = {&s01 , &s02 , &s03};     //���� arp ��һö����ָ��
    cout<< arp[1]->year <<endl;         //arp[1] ��arp����ȥһ��ָ��Ľ������������һöһ��ָ��

    const antarctica_years_end **ppa = arp;
    auto                         ppb = arp;

    cout<< (*ppa)->year <<endl;
    cout<< (*(ppb+1))->year <<endl;

    return 0;
}
