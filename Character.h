#pragma once
#include<string>
class Character
{
private:
   int playerOccupation; 
public:
    Character(int PlayerOccupation);
    ~Character();
    std::string getPlayerOccupation(std::string occupationName)
    {
        return occupationName;
    }
};

Character::Character(int PlayerOccupation)
{
}

Character::~Character()
{
}
