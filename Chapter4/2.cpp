#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
//    const int ArSize = 20;
    string name,dessert;
    cout<< "Enter your name: ";
    getline(cin,name);
    cout<< "Enter a dessert: ";
    getline(cin,dessert);

    cout<< "I have some " <<dessert<< " for you, " <<name<< ".\n";

    return 0;
}
