#include <iostream>
#include<string>
#include<Character.h>

// functions

void PlayGame()
{
std::cout<<"It is a bright sunny day in June of 1884, and you have just gotten done with your work for the day.\nWhat is it that you do for a living?";
std::cout<<"1) a blacksmith, who can get a discount on materials used to repair weapons, and can fix other peoples weapons for a fee.\n 2) a wealthy banker, who has alot of money, but cannot repair tools.\n";
int playerOccupation;
std::cin>> playerOccupation;
switch (playerOccupation)
{
case 1:
    /* code */
    break;

default:
std::cout<<"Please enter a number.";
    break;
}
}

// main program function
int main()
{
    PlayGame();
}