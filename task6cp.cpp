#include <iostream>
using namespace std;
float checkCost(string city,string product,int number);
main()
{
string city,product;
int number;
cout<<"enter city name Sofia,Plovdiv,Varna";
cin>>city;
cout<<"enter product name like coffee,water,beer,sweets,peanuts";
cin>>product;
cout<<"enter Quantity:";
cin>>number;
float result = checkCost(city,product,number);
cout<<result;

}
float checkCost(string city,string product,int number)
{
    float output;
    if(city == "Sofia")
    {
        if(product=="coffee")
        {
            output=(0.5*number);
        }
        if(product == "water"){

            output = 0.8*number;
        }
         if(product == "beer"){

            output = 1.20*number;
        }
         if(product == "sweets"){

            output = 1.45*number;
        }
         if(product == "penauts"){

            output = 1.6*number;
        }
        return output;
    }
     if(city == "Plovdiv")
    {
        if(product=="coffee")
        {
            output=(0.4*number);
        }
        if(product == "water"){

            output = 0.7*number;
        }
         if(product == "beer"){

            output = 1.150*number;
        }
         if(product == "sweets"){

            output = 1.30*number;
        }
         if(product == "penauts"){

            output = 1.50*number;
        }
        return output;
}
     if(city == "Varna")
    {
        if(product=="coffee")
        {
            output=(0.45*number);
        }
        if(product == "water"){

            output = 0.70*number;
        }
         if(product == "beer"){

            output = 1.10*number;
        }
         if(product == "sweets"){

            output = 1.35*number;
        }
         if(product == "penauts"){

            output = 1.55*number;
        }
        return output;
    }
}