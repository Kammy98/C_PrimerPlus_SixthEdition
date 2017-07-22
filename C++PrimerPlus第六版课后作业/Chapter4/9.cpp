#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int calorie;
};

int main()
{
    CandyBar *p = new CandyBar;
    cout<<"依次输入零食名称、重量和卡路里（回车键作分隔符）：\n";
    getline(cin,(*p).name);
    cin>>p->weight>>p->calorie;

    cout<<"Name:"<< p->name <<endl
        <<"Weight:"<< p->weight <<endl
        <<"Calorie:"<< p->calorie <<endl;
    delete p;
    return 0;
}
