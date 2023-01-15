#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
float speed;
cout<<"enter speed:";
cin>>speed;
string result = checkSpeed(speed);
cout<<result;


}
string checkSpeed(float speed)
{
    string output;
    if(speed <= 10)
    {
        cout<<"slow";
        return output;
    }
    if(speed > 10 && speed<=50)
    {
        cout<<"average";
        return output;
    }
    if(speed > 50 && speed <= 150 )
    {
        cout<<"fast";
        return output;
    }
    if(speed > 150 && speed <=1000)
    {
        cout<<"ultrafast";
        return output;
    }
    if(speed > 1000)
    {
        cout<<"extremely fast";
        return output;
    }
}

