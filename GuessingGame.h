/*Your class header file will be called GuessingGame.h and shall contain the following:
The class name is GuessingGame
A private integer member variable which maintains the target guess value
A public constructor with one input parameter (The largest possible target value to guess)
A public member function called MakeGuess with one integer input parameter (Guess made) and returns an integer value relating to the guess being lower, higher, or equal to the target value*/

#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

#pragma once

class GuessingGame
{
public:
    GuessingGame(int);
    ~GuessingGame();
    int MakeGuess(int);

private:
    int target;

};

#endif