#include "Room.hpp"

Room::Room(string title)
{
    this->title = title;
    this->currentNumberOfDoors = 0;
}

void Room::addDoor(Door* door)
{
    int i = this->currentNumberOfDoors;
    this->collectionOfDoors[i] = door;
    this->currentNumberOfDoors++;
}