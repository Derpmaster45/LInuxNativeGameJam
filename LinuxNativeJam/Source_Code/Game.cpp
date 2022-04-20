#include <iostream>
#include<string>
#include<list>
#include<iterator>
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
 std::cout<<"You decide to go fishing, and while you are fishing a bottle floats by you, do you pick it up, or leave it alone?"<<std::endl;;
 std::string playerChoice;
 //std::list inventory;
 if(playerChoice=="leave it alone"|| playerChoice=="Leave it alone"||playerChoice=="LEAVE IT ALONE")
 {
     std::cout<<"You leave to bottle alone.\n";
 }
 else
 {
    std::cout<<"You pick up the bottle and notice a rolled up piece of paper inside, but you need to find a way to open the bottle.\n How are you gonna open the bottle?\n";
    std::cin>>playerChoice;
    if(playerChoice=="Throw Bottle"|| playerChoice=="throw bottle")
    {

    }
    else if(playerChoice=="use knife"||playerChoice=="Use Knife")
    {

    }
    else if(playerChoice=="")
    {
        std::cout<<"Command not recognized!! Please try again.\n";
        std::cin>>playerChoice;
    }
    else if (playerChoice=="use bottle opener")
    {
        std:: cout<<"Bottle opener hasn't been invented yet\n Try another tool.";
        std::cin>>playerChoice;
    }
    else if(playerChoice== "use corkscrew"||playerChoice=="Use Corkscrew")
    {

    }
    else
    {
        std::cout<<"Command not recognized. Please try again.";
        
    }
 }

}

// main program function
int main()
{
    PlayGame();
    return 0;
}