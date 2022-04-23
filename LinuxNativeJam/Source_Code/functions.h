#pragma once
#include<string>
void WeaponDestroyed() // add the weapon name 
{
    
}
void CheckMap(std::string location ) 
{

}
void CheckBalance(int moneyRemaining)
{
    std::cout<<"You have "<<moneyRemaining <<" silver pieces remaining";
}
void ExitGame()
{
    // enter exit code here
}
double RateOfSpeed(double distanceTraveled, double timeSpentTraveling)
{
    double rate=distanceTraveled/timeSpentTraveling;
    return rate;
}
void PrintDistanceToNextTown(int distanceToNextTown, int milesTraveled)
{

}