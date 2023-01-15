#include <iostream>
using namespace std;
char isMark(int grade);
main(){
int marks;
char grade;
cout<<"enter marks:";
cin>>marks;
char result = isMark( grade);
return result;
}
char 
if(marks < 50)
{
    grade= 'F';
}
if(marks >= 50 && marks <= 60)
{
    grade= 'E';
}
if(marks >=61 && marks <= 70 )
{
    grade= 'D';
}
if(marks >= 71 && marks <=80)
{
    grade= 'C';

}
if(marks >=81 && marks <= 85)
{
    grade='B';
}

else
{
    grade = 'A';
}
return grade;
}