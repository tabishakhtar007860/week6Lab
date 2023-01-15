#include <iostream>
using namespace std;
int store(int number);
string day,month;
int total,number;
main()
{

cout<<"enter day:";
cin>>day;
cout<<"enter month :";
cin>>month;
cout<<"enter total amount:";
cin>>total;
int pay=store(number);
 cout<<pay;
}
int store (int number)
{ int discount;

if(day == "sunday" && month =="october"||"march"||"august"){
    float disc =(total - (total*10)/100);
    discount= disc;
}
else if(day== "monday" && month =="november" || "december" )
{
float disc = (total - (total*5)/100);
discount = disc;
}
return discount;

}