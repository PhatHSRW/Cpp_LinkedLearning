#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int dice;
    int *p = &dice;

    dice = rand()%6 +1;
    cout<< dice <<endl;
    cout<< p <<endl;

    dice = 5;
    cout<< p <<endl;

    return 0;
}