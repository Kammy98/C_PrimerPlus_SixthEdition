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
    CandyBar snack ;
    cout<<"依次输入零食名称、重量和卡路里（回车键作分隔符）：\n";
    getline(cin,snack.name);
    cin>>snack.weight>>snack.calorie;

    cout<<"Name:"<< snack.name <<endl
        <<"Weight:"<< snack.weight <<endl
        <<"Calorie:"<< snack.calorie <<endl;

    return 0;
}
