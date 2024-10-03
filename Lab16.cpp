//COMSC-210 | Lab 16: Color Class w/Constructors | Anthony R. Sarabia
// IDE used: Visual Studio

#include <iostream>
#include <iomanip>
using namespace std;

//Const variable for formatting
const int WIDTH = 3;

//STEP #3a: Function prototype for testingColor() - the purpose of this function is to create/test many Color objects
void testingColor();

//STEP #1: Let's create that color class

class Color {
	//private member variables three ints representing red, green, blue
private:
	int red;
	int green;
	int blue;

public:
	//UPDATED CONSTRUCTORS

	Color();			//Default constructor
	Color(int r, int g, int b); //Parameter constructor
	Color(int r);		//Partial constructor

	void setRed(int r); //SETTERS
	void setGreen(int g);
	void setBlue(int b);

	int getRed() const; // GETTERS
	int getGreen() const;
	int getBlue() const;

	void print() const; // print() method
};

//STEP #2: Function Headers
//Color() - Default constructor that intializes red, green, blue to zero - has no arguments and doesn't return anything
Color::Color() : red(0), green(0), blue(0){}

//Color(int r, int g, int b) - Parameter constructor that intializes red, green, blue to given values - 
//arguments are r(int), g(int), b(int) - doesn't return anything
Color::Color(int r, int g, int b) : red(r), green(g), blue(b) {}

//Color(int r) - Partial constructor that intializes red to r, green & blue to zero -
//argument is only r(int) & doesn't return anything
Color::Color(int r) : red(r), green(0), blue(0) {}



//SETTERS
//setRed(int r ) - Sets the red component, argument is (int r), doesn't return anything
void Color::setRed(int r) { red = r; } 

//setGreen(int g ) - Sets the green component, argument is (int g), doesn't return anything
void Color::setGreen(int g) { green = g; }

//setBlue(int b) - Sets the blue component, argument is (int b), doesn't return anything
void Color::setBlue(int b) { blue = b; }

//GETTERS
//getRed(int r ) - Returns the red component, no arguments, returns red (int)
int Color::getRed()const { return red; }

//getGreen(int g ) - Returns the green component, no arguments, returns green (int)
int Color::getGreen()const { return green; }

//getBlue(int b) - Returns the blue component, no arguments, returns blue (int)
int Color::getBlue()const { return blue; }

//PRINT() const - prints the color in formatted way, no arguments, no return 
void Color::print() const {
	cout << "Color: (RED, GREEN, BLUE) -> (" << red << ", " << setw(WIDTH) << green << ", " << setw(WIDTH) << blue << "" << ")" << endl;
}
  
//STEP #4: main() 
int main() {
	testingColor(); // call function in main
	return 0;
}

//STEP #3b: Function Definition for testingColor() - the purpose of this function is to create/test many Color objects
void testingColor() {

	//Let's create a few Color objects (now using different constructors
	Color defaultColor;  //Default Constructor 
	Color parameterColor(1, 2, 3); //Uses parameter constructor
	Color partialColor(714); // Uses partial construcotr
	Color oneMorePartial(417); //Another insntace using partial constructor
	

	//Using setters to modify default
	defaultColor.setRed(9);
	defaultColor.setGreen(8);
	defaultColor.setBlue(6);

	//Now, let's test
	cout << "TESTING COLOR CLASS" << endl;
	cout << endl;

	defaultColor.print();
	parameterColor.print();
	partialColor.print();
	oneMorePartial.print();
	

	cout << endl;
	cout << "COLOR CLASS TESTED" << endl;
}