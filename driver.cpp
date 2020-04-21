#include "iostream"
#include "Room.cpp"
#include "Door.cpp"
#include "Student.cpp"

int main()
{
    Door* firstDoor = new Door("Living Room");
    Student* josh = new Student(firstDoor);
    Room* livingRoom = firstDoor->getRoom();
    Door* secondDoor = new Door("Kitchen");
    livingRoom->addDoor(secondDoor);
    Room* kitchen = livingRoom->getDoor(2)->getRoom();
    Door* thrdDoor = new Door("Dining Room");
    kitchen->addDoor(thrdDoor);
    josh->travel();
}