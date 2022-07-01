#pragma once
#include<string>
#include <sstream>
#include <limits>
void WeaponDestroyed() // add the weapon name 
{
    
}
void CheckMap(std::string location,int milesToNextLandmark, int milesToNextTown ) 
{
std::cout<<"Your current location is "<<location <<" ,and the next land mark is "<< milesToNextLandmark<<" miles away. The next town is "<<milesToNextTown<<" miles away.";
}
void CheckBalance(int moneyRemaining)
{
    std::cout<<"You have "<<moneyRemaining <<" silver pieces remaining";
}
void ExitGame()
{
    exit(0);
}
double RateOfSpeed(double distanceTraveled, double timeSpentTraveling)
{
    double rate=distanceTraveled/timeSpentTraveling;
    return rate;
}
void HandleTravel(int distanceTraveled,int milesToNextTown)
{

    if(distanceTraveled<distanceTraveled)
            {
                std::cout<<"You have "<<milesToNextTown-distanceTraveled <<" miles to the next town.\n";
            
            }
            else if(distanceTraveled==milesToNextTown)
            {
                std::cout<<"You have made it to the the next town.\nWould you like to 1) Stop and gather information or 2) Keep moving?\n";
                int playerChoice;
                std::cin>>playerChoice;
                switch (playerChoice)
                {
                    case 1:
                    #pragma region 
                    std::cout<<"Where would you like to go to gather information?\n 1) Tavern 2)";
                    int actionChoice;
                    std::cin>>actionChoice;
                    #pragma region 
                    switch (actionChoice)
                    {
                        case 1:
                        std::cout<<"You have decided to go to the tavern to try and gather information\n The tavern is packed with people of various professions. Who would you like to talk to first?\n";
                        int choice;
                        std::cout<<"You can talk to \n1) Barkeeper \n 2 the group of farmers at the table to your right\n 3) the coal miner sitting at the table behind you.\n 4) the drunkard at the bar.";
                        std::cin>>choice;
                        #pragma region barExploration
                        switch (choice)
                        {
                        case 1:
                            /* code */
                            break;
                        case 2:
                        break;
                        case 3:
                        break;
                        case 4:
                        break;
                        default:
                            break;
                        }
                        #pragma endregion                        
                        break;
                    case 2:
                     std::cout<<"This code has been reached---TESTING Purpose ONLY";
                    break;
                    default:
                        break;
                    }
                    #pragma endregion
                    #pragma endregion
                    #pragma region 
                    break;
                    case 2:
                    std::cout<<"You leave the town and keep moving";
                    break;
                    #pragma endregion
                    break;
                
                default:
                    std::cout<<"Enter a valid number!\n";
                    break;
                }
            }
}
void distanceToNextLandmark(int distanceToLandmark, int milesTraveled)
{
    std::cout<<"You have "<<distanceToLandmark-milesTraveled<<" to the next landmark";
}
void shop()
{
    
}
// serialization of inputs
int GetInt()
{
    int initalInput=0;
    while (!(std::cin>>initalInput))
    {
        std::cin.clear();
       // std::cin.ignore(std::numeric_limits <streamsize>std::max(),"\n");
      std::cout<<"Please enter a vaild number\n";
       
    }
        // std::cin.ignore(std::numeric_limits <streamsize> std::max(), '\n');
       return(initalInput);
    
}
