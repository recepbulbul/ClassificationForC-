#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        void makesound(){

        }

};

class dog : public Animal{
    public:
        void bark(){
            makesound();
        }
};

class cat : public Animal{
    public: 
        void meow(){
            makesound();
        }
};

class Engine{
    public:
        void start(){

        }
        void stop(){

        }
};

class Car{
    private:
        Engine engine;
    public:
        void startcar(){
            engine.start();
        }
        void stopcar(){
            engine.stop();
        }
};

class Person{
    private:
        string name;
        int age;
    public:
        Person(string n = "", int a = 0) : name(n), age(a){}

        void getName(string n){
            name = n;
        }
        string SetName(){
            return name;
        }
        void getAge(int a){
            age = a;
        }
        int setAge(){
            return age;
        }
};

class Room{
    public:
        Person *occupants;
        int birey;
        Room(Person *ptr) : occupants(ptr){} 
        void addOccupant(){
            cout << occupants->SetName() << " Kisi Eklendi\n";
            birey++;
        }
        void changePerson(Person *ptr){
            occupants = ptr;
        }
};

class House{
    public:
        Room *rooms;
        int odalar = 0;
        House(Room *ptr) : rooms(ptr){} 
        void addRoom(){
            cout << rooms->birey << " Kisiye Sahip Oda Eve Eklendi\n";
            odalar++;
        }

};


int main(){
    Person insan("Recep",18);
    Person insan2("Meryem",19);
    Room odam(&insan);
    House ev(&odam);
    ev.rooms->addOccupant();
    ev.rooms->addOccupant();
    odam.changePerson(&insan2);
    ev.rooms->addOccupant();
    ev.rooms->addOccupant();
    ev.addRoom();
    ev.addRoom();
    ev.addRoom();
    
    cout << "Odadaki Birey Sayisi " << ev.rooms->birey << endl;
    cout << "Evdeki Oda Sayisi " << ev.odalar;


    return 0;
}