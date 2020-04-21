#ifndef Door_cpp
#define Door_cpp

#include "iostream"
#include "Room.cpp"
using namespace std;

class Door
{
    public:
    Door(string nme)
    {
        this->room = new Room(this, nme);
        this->name = "Door to " + nme;
    }
    string displayRoom()
    {
        return this->room->getName();
    }

    string getName()
    {
        return this->name;
    }
    Room* getRoom()
    {
        return this->room;
    }
    private:
    Room* room;
    string name;
};
#endif