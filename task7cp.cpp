#include <iostream>
using namespace std;
float ticket(float amount,string quality,int number);
main()
{
    float amount;
    string quality;
    int number;
    cout<<"enter amount in Qatri Rial which you have:";
    cin>>amount;
    cout<<"enter VIP or Normal quality:";
    cin>>quality;
    cout<<"enter number of group people who to go:";
    cin>>number;
    float result = ticket(amount,quality,number);
    if(result == 1 )
    {
        cout<<"yes you have "<<result<< "QR left";
    }   
    if(result == 2)
    {
        cout<<"not enough memory! you need "<<result<<" QR.";
    }
}

float ticket(float amount,string quality,int number)
{       
     float percentage;
       float cost;
    string output;
    if(quality =="VIP")
    {
         if(number >=1 && number <= 4)
        {
             percentage=(amount*75)/100;
           
        }
        if(number >= 5 && number <= 9)
        {
            percentage=(amount*60)/100;
        }
        if(number >= 10 && number <= 24)
        {
            percentage=(amount*50)/100;
        }
        if(number >=25 && number <= 49)
        {
            percentage=(amount*40)/100;
        }
        if(number >= 50)
        {
            percentage=(amount*25)/100;
        }
                   cost = number*499.99;
            
    }
    if(quality =="Normal")
    {   
       
        if(number >=1 && number <= 4)
        {
             percentage=(amount*75)/100;
           
        }
        if(number >= 5 && number <= 9)
        {
            percentage=(amount*60)/100;
        }
        if(number >= 10 && number <= 24)
        {
            percentage=(amount*50)/100;
        }
        if(number >=25 && number <= 49)
        {
            percentage=(amount*40)/100;
        }
        if(number >= 50)
        {
            percentage=(amount*25)/100;
        }
       
            cost = number*249.99;
            

    }
     float totalR= (amount - percentage);
           
            output = totalR - cost;
        float output1 = cost - totalR;
    if(totalR > cost)
    {
        return 1;
    }
    if( totalR < cost)
    {
        return 2;
    }


}