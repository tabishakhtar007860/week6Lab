#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    char gender;
    int age;
    cout << "enter age:";
    cin >> age;
    cout << "enter gender:";
    cin >> gender;
    string result = checkTitle(age, gender);
    cout << result;
}
string checkTitle(int age, char gender)
{
    string output;
    if (age >= 16)
    {
        if (gender == 'm')
        {
            cout << "Mr.";
            return output;
        }
        if (gender == 'f')
        {
            cout << "Ms.";
            return output;
        }
    }

    if (age < 16)
    {
        if (gender == 'm')
        {
            cout << "master";
            return output;
        }
        if (gender == 'f')
        {
            cout << "miss";
            return output;
        }
    }
}