#include <iostream>
#include<string>
#include "Character.h"
#include "functions.h"

// functions

void PlayGame()
{
    
std::cout<<"It is a bright sunny day in June of 1884, and you have just gotten done with your work for the day.\nWhat is it that you do for a living?";
std::cout<<"1) a blacksmith, who can get a discount on materials used to repair weapons, and can fix other peoples weapons for a fee.\n 2) a wealthy banker, who has alot of money, but cannot repair tools.\n";
std::cout<< "Enter a number from the above choices: \n";
int playerOccupation;
std::string jobName;
std::cin>> playerOccupation;
switch (playerOccupation)
{
case 1:{
    jobName="Blacksmith";
    std::cout<<"You are a "<<jobName <<" that means you can get discounts on raw materials. On top of that, you can fix people's tools if they break.";
    Character blacksmithChar= Character(1);
    break;
}

case 2:{
    jobName="Banker";
    std::cout<<"You are a "<<jobName<<" which means you have alot of money so you won't have to travel on foot.\n";
     Character  bankerChar= Character(2);
    break;
}
default:
std::cout<<"Please enter a number.";
    break;
}

}

// main program function
int main()
{
    PlayGame();
    return 0;
}