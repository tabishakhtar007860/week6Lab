#include <iostream>
using namespace std;
int discounted(string month,string day,int amount);
main()
{
string day,month;
int amount,discount;
cout<<"enter day:";
cin>>day;
cout<<"enter month:";
cin>>month;
cout<<"enter ammount pAYABLE:";
cin>>amount;
int result = discounted(day,month,amount);
cout<<"discounted price is"<<result;
}
int discounted (string day ,string month ,int amount)
{
    float discountPrice;
if(day == "sunday" )
{
    discountPrice=amount-(amount*10)/100;
    if(month == "october"){
        discountPrice = amount -(amount*5)/100;
    }
}
return discountPrice;

}