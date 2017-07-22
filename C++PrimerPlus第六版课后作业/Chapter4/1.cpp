#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
    string Fname,Lname;
    cout<< "First Name: " ;
    getline(cin,Fname);
    cout<< "Last Name: ";
    getline(cin,Lname);

    char ch;
    int age;
    cout<< "Letter grade you deserve: ";
    cin>> ch ;
    cout<< "Your age?: ";
    cin>> age;

    cout<< "================"
        << "Name: "<<Lname<< "," <<Fname <<endl
        << "Grade: " << char(ch+1) << endl
        << "Age: " << age << endl;

    return 0;
}
