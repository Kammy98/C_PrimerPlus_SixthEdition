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
    cout<<"����������ʳ���ơ������Ϳ�·��س������ָ�������\n";
    getline(cin,snack.name);
    cin>>snack.weight>>snack.calorie;

    cout<<"Name:"<< snack.name <<endl
        <<"Weight:"<< snack.weight <<endl
        <<"Calorie:"<< snack.calorie <<endl;

    return 0;
}
