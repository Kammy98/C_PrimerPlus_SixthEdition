#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int Times = 3;
    array<double , Times> scores ;
    cout<< "Input three scores: \n";
    cin>> scores[0] >> scores[1] >> scores[2] ;

    double avg = (scores[0]+scores[1]+scores[2]) / Times;

    cout<< "First time:" <<scores[0]<<endl
        << "Second time:" <<scores[1]<<endl
        << "Third time:" <<scores[2]<<endl
        << "Average:" << avg << endl;
    return 0;
}
