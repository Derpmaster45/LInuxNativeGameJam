#include <iostream>
#include<string>
#include<list>
#include<iterator>
#include "Character.h"
#include "functions.h"


// functions

void PlayGame()
{
    bool isOccupationChosen=false;
    int playerAction;
 while(isOccupationChosen==false){
    
    std::cout<<"It is a bright sunny day in June of 1884, and you have just gotten done with your work for the day.\nWhat is it that you do for a living?";
    std::cout<<"\n1) a blacksmith, who can get a discount on materials used to repair weapons, and can fix other peoples weapons for a fee.\n 2) a wealthy banker, who has alot of money, but cannot repair tools.\n";
    std::cout<< "Enter a number from the above choices: \n";
    int playerOccupation;
    int playerChoice=0;
    double playerMoney;
    std::string jobName;
    std::cin>> playerOccupation;
    switch (playerOccupation)
    {
    case 1:{
        jobName="Blacksmith";
        std::cout<<"You are a "<<jobName <<" that means you can get discounts on raw materials. On top of that, you can fix people's tools if they break.\n";
        Character blacksmithChar= Character(1);
        isOccupationChosen=true;
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
 
 std::cout<<"You decide to go fishing, and while you are fishing a bottle floats by you, 1(do you pick it up, or 2(leave it alone?"<<std::endl;
 std::cin>>playerChoice;
 bool bottleOpened;
 switch (playerChoice)
 {
 case 1:
     std::cout<<"You decided to pick up the bottle, it's corked shut. How are you going to open the bottle?\n";
     std::cout<<"1) Bottle Opener\n 2)Knife\n3) Shoe\n 4)Throw it\n";
     std::cin>>playerAction;
     switch(playerAction)
     {
        case 1: 
         std::cout<<"You can't use something that has not been invented yet\n";
         break;
         case 2:
         std::cout<<"You open the bottle by carefully using a knife";
         bottleOpened=true;
         break;
         case 3: 
         std::cout<<"You find a solid rock to try and uncork the bottle";
         bottleOpened=true;
         break;
         case 4: 
         std::cout<<"You throw it as hard as you can at a boulder you found, breaking the bottle on impact.\nYou retrive the paper from the shards of glass\n";
         break;
         default: 
         break;

     }
     
     break;
 
    default:
     break;
 }
}
}
// main program function
int main()
{
    PlayGame();
    return 0;
}