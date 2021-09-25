#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main()
{
    bool player1Turn = true;
    bool gameOver = false;

    int chipsInPile = 0;
    int maxPerTurn;
    int chipsTaken = 0;

    // string player1;
    // string player2;

    int n;
    cout<<"How many players join? ";
    cin >> n;
    string playerNames[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Name of player "<<i+1<<endl;
        cin>> playerNames[i];
    }
    

    // seed random number generator
    srand(time(0));

    chipsInPile = rand()%MAX_CHIPS +1;
    cout <<"This round will start with "<< chipsInPile<<" chips in the pile"<<endl;

    maxPerTurn = chipsInPile*MAX_TURN;
    cout <<"You can only take up to "<< maxPerTurn << endl;

    chipsTaken = rand()%maxPerTurn +1;
    cout <<"Your chips taken: "<< chipsTaken << endl;
    return 0;
}