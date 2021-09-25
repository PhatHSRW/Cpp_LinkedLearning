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
    int chipsTaken = 0;

    string player1;
    string player2;

    // seed random number generator
    srand(time(0));

    chipsInPile = rand()%MAX_CHIPS +1;
    cout <<"This round will start with "<< chipsInPile<<" chips in the pile"<<endl;

    cout <<"You can only take "<< int(chipsInPile*MAX_TURN) << endl;
    
    cout <<"You can only take "<< static_cast<int>(chipsInPile*0.5) << endl;
    return 0;
}