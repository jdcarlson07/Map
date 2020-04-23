#include "Student.hpp"

Student::Student(string name)
{
    this->name = name;
    this->currentRoom = 0;
}

void Student::setRoom(Room* room)
{
    this->currentRoom = room;
}