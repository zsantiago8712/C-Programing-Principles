#include "..\Headers\std_lib_facilities.h"


using namespace std;

int main()
{
    string name, name_friend;
    char friend_sex = 0;
    int friend_age;

    cout << "Hello, ";
    cin >> name ;
    cout << "Enter the person you want to write to ";
    cin >> name_friend;
    cout << "Write a 'M' if your friend is male or 'F' if is a female: ";
    cin >> friend_sex;
    cout << "Write the age of your friend ";
    cin >> friend_age;

    if (friend_age <= 0 || friend_age >= 110)
        simple_error("you´re kidding!!");
    system("cls");


    cout << "Dear " << name << ", How are you? I am fine. I miss you.\n" << "Have you seen" << name_friend << "lately";
    if(friend_sex == 'm')
        cout << "If you have see " << name_friend << " please ask him to call me." << endl;
    else if (friend_sex == 'f')
        cout << "If you have see " << name_friend << " please ask her to call me." << endl;
    
    cout << "I have hear you just had a birthfay and you are " << friend_age << " years old" << endl;

    if(friend_age > 12)
        cout << "Next year you will be " << friend_age + 1 << "." << endl;
    else if (friend_age < 17)
        cout << "Next year you will be able to vote." << endl;
    else if(friend_age > 70)
        cout << "I hope ypu are enjoining retirement" << endl;
    else
        cout << "Happy " << friend_age << endl;


    cout << "Yours sincerely " << name << endl;       
}