// comsc 210 | lab16 | Christian Molina
#include <iostream>
#include <iomanip>
using namespace std;

class Colors {
    private:
        int red;// RGB values
        int green;
        int blue;


    public:

        Colors() : red(0), green(0), blue(0) {} 
        Colors(int r, int g, int b) : red(r), green(g), blue(b) {}
        Colors(int r) : red(r), green(0), blue(0) {} //red only
        Colors(int r, int g) : red(r), green(g), blue(0) {} //red and green

        void setRed(int r) { red = r; }
        void setGreen(int g) { green = g; }
        void setBlue(int b) { blue = b; }

        // Getters? first time i use these
        int getRed() const { return red; }
        int getGreen() const { return green; }  
        int getBlue() const { return blue; }

        void print() const {
            cout << left << setw(4) << red << " "
                 << left << setw(4) << green << " "
                 << left << setw(4) << blue << endl;
        }

};

int main() {
    Colors defaultColor; // default constructor
    Colors fullColor(255, 100, 50); //the constructor with parameters
    Colors redOnly(128);
    Colors redGreen(60, 180);

    Colors colors;
    colors.setRed(75);
    colors.setGreen(0);
    colors.setBlue(130);

    cout << left << setw(4) << "R" << " "
         << left << setw(4) << "G" << " "
         << left << setw(4) << "B" << endl;
    cout << "------------------" << endl;

    //output the default colors
    cout<< "default constructor: ";
    defaultColor.print();
    cout<< "constructor with parameters: ";
    fullColor.print();
    cout<< "setters: ";
    colors.print();// print the RGB values
    cout<< "red only: ";
    redOnly.print();
    cout<< "red and green: ";
    redGreen.print();

    return 0;
    
}