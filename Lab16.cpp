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

//STEP #1b: Function Headers
//Color() - Default constructor that intializes red, green, blue to zero - has no arguments and doesn't return anything
Color::Color() : red(0), green(0), blue(0){}

//Color(int r, int g, int b) - Parameter constructor that intializes red, green, blue to given values - 
//arguments are r(int), g(int), b(int) - doesn't return anything
Color::Color() : red(0), green(0), blue(0) {}

//Color() - Default constructor that intializes red, green, blue to zero - has no arguments and doesn't return anything
Color::Color() : red(0), green(0), blue(0) {}




// STEP #2:	Now, let's define some functions. The constructor, color(), which initializes our values and returns nothing
Color::Color(int r, int g, int b) : red(r), green(g), blue(b) {}

//SETTERS
void Color::setRed(int r) { red = r; }
void Color::setGreen(int g) { green = g; }
void Color::setBlue(int b) { blue = b; }

//GETTERS
int Color::getRed()const { return red; }
int Color::getGreen()const { return green; }
int Color::getBlue()const { return blue; }

//PRINT() - simply prints teh color object in a nice format, and doesn't return anything

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

	//Let's create a few Color objects
	Color firstColor;
	Color secondColor(1, 0, 0);
	Color thirdColor(0, 2, 0);
	Color fourthColor(0, 0, 3);
	Color fifthColor(7, 1, 4);

	//And we'll choose the first color to populate using setters
	firstColor.setRed(9);
	firstColor.setGreen(8);
	firstColor.setBlue(6);

	//Now, let's test
	cout << "TESTING COLOR CLASS" << endl;
	cout << endl;

	firstColor.print();
	secondColor.print();
	thirdColor.print();
	fourthColor.print();
	fifthColor.print();

	cout << endl;
	cout << "COLOR CLASS TESTED" << endl;
}