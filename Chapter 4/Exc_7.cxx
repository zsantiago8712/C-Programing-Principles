#include "../Headers/std_lib_facilities.h"


int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        exit(1);
    }

    if(atoi(argv[1]) > 9 || atoi(argv[2]) > 9)
    {
        cout << "Error solo se  acpetan numeros de un digito" << endl;
        exit(1);
    }


    if(strcmp(argv[3], "+") == 0)
    {
        cout << argv[1] << " + " << argv[2]  << " = " << atoi(argv[1]) + atoi(argv[2]) << endl;
    }else if(strcmp(argv[3], "-") == 0)
    {
        cout << argv[1] << " - " << argv[2]  << " = "  << atoi(argv[1]) - atoi(argv[2]) << endl;
    }else if(strcmp(argv[3], "x") == 0)
    {
        cout << argv[1] << " x " << argv[2]  << " = " << atoi(argv[1]) * atoi(argv[2]) << endl;
    }else if(strcmp(argv[3], "/") == 0)
    {
       cout << argv[1] << " / " << argv[2]  << " = " << atoi(argv[1]) / atoi(argv[2]) << endl;
    }else if(strcmp(argv[3], "%") == 0)
    {
       cout << argv[1] << " % " << argv[2]  << " = " << atoi(argv[1]) % atoi(argv[2]) << endl;
    }else
    {
        cout << "Error" << endl;
        exit(1);
    }



}