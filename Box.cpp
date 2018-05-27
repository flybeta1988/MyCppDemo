#include <iostream>
using namespace std;

class Box {

    public:

        double length;
        double width;
        double height;

        void setLength (double l) {
            length = l;
        }
        void setWeight (double w) {
            width = w;
        }
        void setHeight (double h) {
            height = h;
        }

        double getVolume(void);

};

double Box::getVolume(void) {
    cout << length * width * height << endl;
}

int main () {

    Box box1;
    Box box2;
    double volume = 0.0;

    box1.setLength(1);
    box1.setWeight(2);
    box1.setHeight(3);
    box1.getVolume();
}

