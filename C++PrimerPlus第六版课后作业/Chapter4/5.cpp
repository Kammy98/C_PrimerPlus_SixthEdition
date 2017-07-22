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
    CandyBar snack { "Mocha Munch" , 2.3 , 350 };
    cout<<"Name:"<< snack.name <<endl
        <<"Weight:"<< snack.weight <<endl
        <<"Calorie:"<< snack.calorie <<endl;

    return 0;
}
