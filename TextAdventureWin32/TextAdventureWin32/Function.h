#pragma once
#include<string>
#include <iostream>
void WeaponDestroyed() // add the weapon name 
{

}
void CheckMap(std::string location)
{

}
void CheckBalance(int moneyRemaining)
{
    std::cout << "You have " << moneyRemaining << " silver pieces remaining";
}
void ExitGame()
{
    // enter exit code here
}
double RateOfSpeed(double distanceTraveled, double timeSpentTraveling)
{
    double rate = distanceTraveled / timeSpentTraveling;
    return rate;
}
void HandleTravel(int distanceTraveled, int milesToNextTown)
{

    if (distanceTraveled < distanceTraveled)
    {
        std::cout << "You have " << milesToNextTown - distanceTraveled << " miles to the next town.\n";

    }
    else if (distanceTraveled == milesToNextTown)
    {
        std::cout << "You have made it to the the next town.\nWould you like to 1) Stop and gather information or 2) Keep moving?\n";
        int playerChoice;
        std::cin >> playerChoice;
        switch (playerChoice)
        {
        case 1:
#pragma region 
            std::cout << "Where would you like to go to gather information?\n 1) Tavern 2)";
            int actionChoice;
            std::cin >> actionChoice;
#pragma region 
            switch (actionChoice)
            {
            case 1:
                std::cout << "This code has been reached---TESTING Purpose ONLY";
                break;
            case 2:
                std::cout << "This code has been reached---TESTING Purpose ONLY";
                break;
            default:
                break;
            }
#pragma endregion
#pragma endregion
            break;
        case 2:
            std::cout << "You leave the town and keep moving";
           
            break;
#pragma region 
#pragma endregion
            break;

        default:
            std::cout << "Enter a valid number!\n";
            break;
        }
    }
}

