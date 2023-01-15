#include <iostream>
using namespace std;
int isGreater(int number);
int number1,number;
    int number2;
    int number3;
main()
{
    
    cout<<"enter number1:";
    cin>>number1;
    cout<<"enter number2:";
    cin>>number2;
    cout<<"enter 3rd number:";
    cin>>number3;
    int result =isGreater(number);   
    if(result ==1)
    {
        cout<<"number1 is greater";
    }
     if(result == 2){
        cout<<"number 2is graeter";
    }
     if(result == 3){
        cout<<"number3 is greater";
    }


}
int isGreater(int number){
    int greatest;
if(number1 > number2 && number1 > number3)

{ 
    greatest =1;
}
else if(number2 > number1 && number2 > number3)
{ 
    greatest =2;
}
else if(number3 > number2 && number3 > number2)
{ 
    greatest =3;
}
else{
    greatest = 3;
}
return greatest;



}
