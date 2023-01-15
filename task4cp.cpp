#include <iostream>
using namespace std;
float totalIncome(string Quality,int rows,int columns);
main()
{
string Quality;
int rows,columns;
cout<<"eneter Quality Permium or Normal";
cin>>Quality;
cout<<"enter number of rows:";
cin>>rows;
cout<<"enter number of columns:";
cin>>columns;
float result = totalIncome(Quality,rows,columns);
cout<<result;
}
float totalIncome(string Quality,int rows,int columns)
{
    int output;
    if(Quality== "Premium")
    {
    output=rows*columns*12;

    }
    if(Quality == "Normal")
    {
        output =rows* columns *7.50;
    }
    return output;
}