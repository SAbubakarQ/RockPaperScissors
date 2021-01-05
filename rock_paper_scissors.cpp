// Bismillah - AbubakarQ

/* 
Rock Paper Scissors Lizard Spock - Game inspired by Big Bang Theory

Basic RPS game:
Scissors cuts Paper
Paper covers Rock 
Rock crushes Scissors

Additonal Spock Element:
Spock smashes Scissors
Spock vaporizes Rock
Lizard poisons Spock
Paper disproves Spock

Additional Lizard Element:
Lizard poisions Spock
Lizard eats Paper
Rock crushes Lizard
Scissors decapitates Lizard

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{

    int user = 0;

    cout << "Rock Paper Scissors Lizard Spock! Choose option: \n";

    cout << "0. 'quit'\n";
    cout << "1. ⛰\n";
    cout << "2. 📄 \n";
    cout << "3. 🔪 \n";
    cout << "4. 🦎 \n";
    cout << "5. 🖖\n";

    cout << " Shoot! ";
    cin >> user;

    while (user >= 0 && user <= 5)
    {
        srand(time(NULL));
        int computer = rand() % 5 + 1;

        if (user == 0)
        {
            cout << endl;
            cout << "Thank you for playing!\n" << endl;
            return 0;
        }
        else if (user == computer)
        {
            cout << "Tie.\n";
            cout << " Shoot! ";
        }
        else if (user == 1 && computer == 2)
        {
            cout << " ⛰ vs 📄\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 1 && computer == 3)
        {
            cout << " ⛰ vs 🔪\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 1 && computer == 4)
        {
            cout << " ⛰ vs 🦎\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 1 && computer == 5)
        {
            cout << " ⛰ vs 🖖\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 2 && computer == 1)
        {
            cout << " 📄 vs ⛰\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 2 && computer == 3)
        {
            cout << " 📄 vs 🔪\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 2 && computer == 4)
        {
            cout << " 📄 vs 🦎\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 2 && computer == 5)
        {
            cout << " 📄 vs 🖖\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 3 && computer == 1)
        {
            cout << " 🔪 vs ⛰\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 3 && computer == 2)
        {
            cout << " 🔪 vs 📄\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 3 && computer == 4)
        {
            cout << " 🔪 vs 🦎\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 3 && computer == 5)
        {
            cout << " 🔪 vs 🖖\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 4 && computer == 1)
        {
            cout << " 🦎 vs ⛰\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 4 && computer == 2)
        {
            cout << " 🦎 vs 📄\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 4 && computer == 3)
        {
            cout << " 🦎 vs 🔪\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 4 && computer == 5)
        {
            cout << " 🦎 vs 🖖\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }

        else if (user == 5 && computer == 1)
        {
            cout << " 🖖 vs ⛰\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 5 && computer == 2)
        {
            cout << " 🖖 vs 📄\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else if (user == 5 && computer == 3)
        {
            cout << " 🖖 vs 🔪\n";
            cout << "You've Won!\n";
            cout << " Shoot! ";
        }
        else if (user == 5 && computer == 4)
        {
            cout << " 🖖 vs 🦎\n";
            cout << "Sorry, you've lost.\n";
            cout << " Shoot! ";
        }
        else
        {
        return 0;
        }

        cin >> user;
    }

    cout << endl << "*ERROR* Invalid Input. Goodbye and Thanks for playing! \n" << endl;

}