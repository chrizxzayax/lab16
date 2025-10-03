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
    Colors color1; // default constructor
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    Colors color2(0, 255, 0); //constructor with parameters
    Colors color3(0, 0, 255);
    Colors color4(128, 128, 128); 

    Colors color5;
    color5.setRed(75);
    color5.setGreen(0);
    color5.setBlue(130);

    cout << left << setw(4) << "R" << " "
         << left << setw(4) << "G" << " "
         << left << setw(4) << "B" << endl;
    cout << "------------------" << endl;
    color1.print();
    color2.print();
    color3.print();
    color4.print();
    color5.print();// print the RGB values

    return 0;
    
}