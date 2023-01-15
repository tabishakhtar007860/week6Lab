#include <iostream>
using namespace std;
int play(string year,int holidays,int weekends);
main()
{
string year;
int holidays,weekends;
cout<<"enter leap or Normal Year:";
cin>>year;
cout<<"enter holidays other than sunday and saturday";
cin>>holidays;
cout<<"enter weekends inwhich he goes to hometown:";
cin>>weekends;
int result = play(year,holidays,weekends);
if(result == 1)
{
    cout<<result;
}
if(result == 2)
{
    cout<<result;
}

}
int play(string year,int holidays,int weekends)
{
    int output;
    int final;
    if(year == "leap")
    {
      output=(48-holidays-weekends)+(holidays*0.67)+(weekends*0.75);
        final = output+ (output*15)/100;
        return 1;


    }
    if(year == "normal")
    {
        output=(48-holidays-weekends)+(holidays*0.67)+(weekends*0.75);
        return 2;
    }



}