#include <iostream>
#include <cstring>
using namespace std;

class Animal {

    public:

        string name;
        float weight;
        float height;
        float speed;

        Animal () {
            cout << "I am the construct function !";
        }

        void run () {
            cout << "I can run " << speed << " km/h" << endl;
        }

        void setName (string n) {
            name = n;
        }

        ~Animal() {
            cout << "I am the destory function !";
        }

};

class Dog: public Animal {
    public:
        void getWeight () {
            cout << "My weith is " << weight << " kg;" << endl;
        }
};

int main () {
    Dog dog;
    dog.setName("Dog");
    dog.run();
    dog.getWeight();
}