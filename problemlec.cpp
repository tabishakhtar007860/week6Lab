#include <iostream>
using namespace std;
string login(string name,string password);
main()
{
string name;
string password;
cout<<"enter Username:______";
cin>>name;
cout<<"Enter Password:______";
cin>>password;
string result = login(name,password);
cout<<result;

}
string login(string name,string password)
{ string details;
if(name=="Admin" && password == "TheMaster")
{
    cout<<"welcome!";
    return  details;
}
else
{
    cout<<"canceled";
    return details;
}


}