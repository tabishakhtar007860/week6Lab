#include <iostream>
using namespace std;
string checkTitle(int ag,char gend);
int age,ag;
char gender,gend;
main()
{
cout<<"enter age:";
cin>>age;
cout<<"enter gender:";
cin>>gender;
string result = checkTitle(ag,gend);
if( result == 1)
{
    cout <<"Mr.";
}
if(result ==2)
{
    cout<<"master";

}
if(result == 3)
{
    cout<<"Ms.";
}
if(result ==4)
{
    cout<<"miss.";
}
}
string checkTitle(int ag,char gend)
{ int program;

if(age <= 16 && gender == 'm')
{
    program = 1;
}
if(age > 16 && gender=='m')
{
    program = 2;
}
if(age > 16 && gender=='f')
{program =3;}
if(age<=16 && gender == 'f')
{
    program = 4;

}
    return program;
}