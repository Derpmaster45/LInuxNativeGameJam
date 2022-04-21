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
double playerMoney;
std::string jobName;
std::cin>> playerOccupation;
switch (playerOccupation)
{
case 1:{
    jobName="Blacksmith";
    std::cout<<"You are a "<<jobName <<" that means you can get discounts on raw materials. On top of that, you can fix people's tools if they break.\n";
    Character blacksmithChar= Character(1);
    break;
}

case 2:{
    jobName="Banker";
    std::cout<<"You are a "<<jobName<<" which means you have alot of money so, replacing tools and getting food won't be difficult for you.\n";
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
 bool isBottleOpened;
 std::cin>>playerChoice;
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
        isBottleOpened=true;
        std::cout<<"You throw the bottle on the ground and it breaks.\n You carefully remove the paper from the shattered glass.\n";
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
        std:: cout<<"Bottle opener hasn't been invented yet\n Try another tool.\n";
        std::cin>>playerChoice;
    }
    else if(playerChoice== "use corkscrew"||playerChoice=="Use Corkscrew")
    {
        std::cout<<"You open the bottle without issue. You extract the paper from the bottle\n";
        isBottleOpened=true;
    }
    else
    {
        std::cout<<"Command not recognized. Please try again.\n";

    }
   // bool isBottleOpened;
    std::cout<<"You have the paper out of the bottle, would you like to look at it?\n";
    std::cin>>playerChoice;
    if(playerChoice=="Yes"|| playerChoice=="yes"||playerChoice=="Look at map"||playerChoice=="look at map")
        std::cout<<"You unravel the paper,and study it closely for roughly about 2 hours. You figure out it is a tresure map\n";
        std::cout<<"Would you like to start your hunt now ,or wait until morning?\n";
        std::cin>>playerChoice;
        if(playerChoice=="Wait until morning")
        {
            std::cout<< "You decide to wait until morning taking the rest of the evening to prep for your long journey ahead.\n";
        }
        else if(playerChoice=="Start hunt now")
        {
            std::cout<<"Without hesitation you grab what you think you will need on this journey and leave, ";
        }
        else
        {
            std::cout<<"Please enter one of the following choices start hunt now or wait until morning\n";
            std::cin>> playerChoice;
        }
    }
 }



// main program function
int main()
{
    PlayGame();
    return 0;
}