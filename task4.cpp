#include <iostream>
using namespace std;
float totalIncome(string Quality,int rows,int columns);
string Quality;
int rows,columns;
main(){
cout<<"enter type:";
cin>>Quality;
cout<<"enter rows:";
cin>>rows;
cout<<"enter columns:";
cin>>columns;
int result = totalIncome(Quality,rows,columns);
cout<<"resut"<<result;


}
float totalIncome(string Quality,int rows,int columns)
{ 
    float result;
if( Quality == "Premium"){
    result=rows*columns*12;
    return result;
}
if( Quality == "normal")
{
    result=rows*columns*7.5;
    return result;
}
if( Quality == "discounted")
{
    result =rows*columns*5;
    return result;
}

}
