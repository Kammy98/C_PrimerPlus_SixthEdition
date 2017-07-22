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
    cout<<"依次输入直径、名称、重量（回车键作分隔符）：\n";
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
