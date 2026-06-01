#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); 

    int team1 = 0, team2 = 0;
    int events;

    
    events = (rand() % 5) + 1;

    cout << "Total events in this match: " << events << endl;

    for (int i = 1; i <= events; i++)
    {
        

        if (events== 1)
        {
            team1++;
            cout << "Event " << i << ": Team 1 scored a goal!" << endl;
        }
        else
        {
            team2++;
            cout << "Event " << i << ": Team 2 scored a goal!" << endl;
        }
    }

    cout << endl;
    cout << "Final Score:" << endl;
    cout << "Team 1: " << team1 << endl;
    cout << "Team 2: " << team2 << endl;

    if (team1 > team2)
        cout << "Team 1 wins!" << endl;
    else if (team2 > team1)
        cout << "Team 2 wins!" << endl;
    else
        cout << "Match Draw!" << endl;

    return 0;
}

