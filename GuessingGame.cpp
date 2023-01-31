/*Your class implementation file will be called GuessingGame.cpp and shall implement the functionality of the class as follows:
The public constructor sets the target guess value member variable to a random number in the range of [1 - InputParameter] (Inclusive on both ends)
Use rand() to generate your random number
I already randomized the random number generator for you using srand() in the main function
Always make sure to use an initializer list in all C++ constructors!
The MakeGuess member function will determine the status of the guess
If the guess is lower than the target value, return -1
If the guess is higher than the target value, return +1
If the guess is the same as the target value, return 0
No printing of any kind goes in here!
The printing will come from the main function in response to the return value*/
#include "GuessingGame.h"
#include <iostream>
#include <random>
//#include <ctime>
GuessingGame::GuessingGame(int max)
{
    //srand(time(NULL));
    this->target = rand() % max + 1;
    std::cout << target << std::endl;
}

GuessingGame::~GuessingGame()
{

}
int GuessingGame::MakeGuess(int guess)
{
    if (guess < target)
    {
        return -1;
    }
    else if (guess > target)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}