#include <iostream>
#include <string>

using namespace std;

struct Wpizza
{
    string name;
    double weight;
    double diameter;
};

int main()
{
    Wpizza *p = new Wpizza;
    cout<<"��������ֱ�������ơ��������س������ָ�������\n";
    cin>>p->diameter;
    cin.get();
    getline(cin,(*p).name);
    cin>>p->weight;

    cout<<"Diameter:"<< p->diameter <<endl
        <<"Name:"<< p->name <<endl
        <<"Weight:"<< p->weight <<endl;

    delete p;
    return 0;
}
