// Composition is a strong "has-a" relationship, where one class owns objects of another class. If
// the container object is destroyed, the contained objects are destroyed as well.

#include<iostream>
#include<vector>
using namespace std;

class Room{
   private:
   string name;
   public:
    Room(string name){
        this->name = name;
    };
    string getName() const {
        return this->name;
    };
};

class House{
   vector<Room*> rooms;
    public:
     void addRoom(Room* room){
          rooms.push_back(room);
     };
     void showRooms() const {
          cout << "Rooms in the house:" << endl;
          for(Room* room : rooms){
                cout << room->getName() << endl;
          }
     };
     ~House(){
          for(Room* room : rooms){
                delete room; // Clean up dynamically allocated memory
          }
     };
};

int main(){
    House* myHouse = new House();
    Room* livingRoom = new Room("Living Room");
    Room* bedroom = new Room("Bedroom");
    Room* kitchen = new Room("Kitchen");
    myHouse->addRoom(livingRoom);
    myHouse->addRoom(bedroom);  
    myHouse->addRoom(kitchen);
    myHouse->showRooms();
    delete myHouse; // Clean up dynamically allocated memory for house
}