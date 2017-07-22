
//这份代码清单是为了介绍 指针、数组、结构体 的混合使用而写的
//纯本人手码，来源参考《C++PP》第六版程序清单的4.23

#include <iostream>

/*
    指针的核心知识！不看必然后悔十年！

    变量定义时，*是指针变量，[]是指针常量，二者都能代表有指针存在

    在表达式里，*和[]代表消去一重指针（取值）
    在表达式里，  &  代表增加一重指针

    一颗大栗子：

    int a[4];      定义a是一重指针
    int (*p)[4];   定义p是二重指针
    所以表达式里：
    p=&a;          二重指针赋二重指针，正确~
*/

using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01,s02,s03;   //声明有三个结构体变量

    s01.year = 1998;                    //结构名 . 成员

    antarctica_years_end *pa = &s02;
    pa->year = 1999;                    // 指针 —> 成员

    antarctica_years_end trio[3];       //一个“结构体”类型的数组
    trio[0].year = 2003;                //依旧是： 结构名 . 成员
    cout<< trio->year <<endl;           //trio是一个数组名，同时可当作一枚一重指针

    const antarctica_years_end * arp[3] = {&s01 , &s02 , &s03};     //定义 arp 是一枚二重指针
    cout<< arp[1]->year <<endl;         //arp[1] 是arp被消去一重指针的结果，所以它是一枚一重指针

    const antarctica_years_end **ppa = arp;
    auto                         ppb = arp;

    cout<< (*ppa)->year <<endl;
    cout<< (*(ppb+1))->year <<endl;

    return 0;
}
