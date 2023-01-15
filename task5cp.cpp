#include <iostream>
using namespace std;
float lowestPrice(int kilometers,string Day);
main()
{
int kilometers;
string Day;
cout<<"enter kilometers";
cin>>kilometers;
cout<<"enter day or night:";
cin>>Day;
int result = lowestPrice(kilometers,Day);
cout<<result;
}
float lowestPrice(int kilometers,string Day)
{
    float output1,output2,output3,output4;
    if(kilometers <= 20)
    {
        
        output1=0.09*kilometers;
    }
    if(kilometers >20 && kilometers <= 100)
    {
    
        output2 = 0.06*kilometers;
    }
    else
    {
    
    if(Day == "Day")
    {output3 = kilometers*0.79;}
    
    if(Day == "Night")
    {
            output4=kilometers*0.90;
    }}
if(output3< output4 && output3 < output1 && output3< output2)
{
    return output3;
}
if(output1< output4 && output1 < output3 && output1< output2)
{
    return output1;
}
if(output2< output4 && output2 < output1 && output2< output3)
{
    return output2;
}
if(output4< output3 && output4 < output1 && output4< output2)
{
    return output4;
}
}
