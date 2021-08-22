#include "../Headers/std_lib_facilities.h"
#include <time.h>





int main(void)
{
    int userSelection = 0;
    int cpuSelection = 0;
    srand(time(NULL));

    cout << "       ROCK, PAPER, SCISSORS       " << endl;
    while(1)
    {
        while(userSelection < 1 || userSelection > 3)
        {
            cout << "Choose 1 for ROCK, 2 for PAPER, 3 FOR SCISSORS" << endl;
            cin >> userSelection;
            cpuSelection = rand() % 4;


        }

        cout << "Jugador1: " <<  userSelection << " CPU: " << cpuSelection << endl;

        switch (userSelection)
        {
        case 1:
            if(cpuSelection == 1)
            {
                cout << "Empate" << endl;
                userSelection = 0;

            }else if(cpuSelection == 2)
            {
                cout << "Gano el la CPU" << endl;
                exit(1);
            }else if(cpuSelection == 3)
            {
                cout << "Gano el el Jugador1" << endl;
                exit(1);
            }
            break;
        
        case 2:
           if(cpuSelection == 1)
            {
                cout << "Gano el Jugador1 " << endl;
                exit(1);
            }else if(cpuSelection == 2)
            {
                cout << "Empate" << endl;
                userSelection = 0;

                
            }else if(cpuSelection == 3)
            {
                cout << "Gano el la CPU" << endl;
                exit(1);
            } 
            break;

        case 3:
            if(cpuSelection == 1)
            {
                cout << "Gano el la CPU" << endl;
                exit(1);
            }else if(cpuSelection == 2)
            {
                cout << "Gano el el Jugador1" << endl;
                exit(1);
            }else if(cpuSelection == 3)
            {
                cout << "Empate" << endl;
                userSelection = 0;
            } 
            break;

        default:
            break;
        }



    }


}