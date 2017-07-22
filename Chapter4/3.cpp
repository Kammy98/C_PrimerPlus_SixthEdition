#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;


int main()
{
    const int Size = 41;
    char Fname[Size] , Lname[Size] , Wname[Size] ;
    cout<< "First Name: " ;
    cin>>Fname;
    cout<< "Last Name: ";
    cin>>Lname;

    strcpy(Wname,Lname);
    strcat(Wname,", ");
    strncat(Wname,Fname,40);
    cout<< Wname <<endl;

    return 0;
}
