#include "..\Headers\std_lib_facilities.h"

int main()
{
    string name;
    int age;

    cout << "Write your name and your age: ";
    cin >> name >> age;
    cout << "You name is " << name << "and you are " << age * 12 << " months old" << endl; 
}
