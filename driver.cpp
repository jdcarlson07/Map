#include <iostream>
#include "Student.hpp"
#include "Room.hpp"
#include "Door.hpp"
#include "StudentNode.hpp"
#include "LinkedListOfStudents.hpp"
using namespace std;

int main()
{
    cout << "hello world\n";
    Student* josh = new Student("Josh");
    Student* jarrett = new Student("Jarrett");
    Student* elias = new Student("Elias");
    Student* benhuber = new Student("Ben Huber");
    Student* joe = new Student("Joe");
    Student* jake = new Student("Jake");
    LinkedListOfStudents* list = new LinkedListOfStudents();
    list->addFront(josh);
    list->addFront(jarrett);
    list->addFront(elias);
    list->addFront(benhuber);
    list->addFront(joe);

    cout << list->indexOf(joe) << "\n";
    cout << list->indexOf(benhuber) << "\n";
    cout << list->indexOf(elias) << "\n";
    cout << list->indexOf(jarrett) << "\n";
    cout << list->indexOf(josh) << "\n";
    cout << list->indexOf(jake) << "\n";
    Student* a = list->removeAtIndex(4);
    cout << list->indexOf(josh) << "\n";
    list->addFront(josh);
    cout << list->indexOf(josh) << "\n";
    cout << list->indexOf(jarrett) << "\n";
    cout << "hello world\n";
}