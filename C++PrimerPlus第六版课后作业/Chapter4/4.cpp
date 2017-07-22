#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
//    const int Size = 41;
    string Fname , Lname , Wname ;
    cout<< "First Name: " ;
    cin>>Fname;
    cout<< "Last Name: ";
    cin>>Lname;

    Wname = Lname + ", " + Fname;
    cout<< Wname <<endl;

    return 0;
}
