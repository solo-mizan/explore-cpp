#include <iostream>
using namespace std;

int main() {

// this is single line comment.
cout << "Hello World!" << endl;

/* this is a
multiple line 
comment!
*/
cout << "Hello Universe!" << endl;

// these are variables for calculating area of a Rectangle
int height;
int width;

// print the prompt
cout << "Enter the height and width of a Rectangle: " << endl;

// store the user input in previously declared variables
cin >> height >> width;

// run multiplication operation and store the value in area named variable
int area = height * width;

// print area to user end
cout << "Area: " << area << endl;

// find the perimeter of the rectangle
int perimeter = 2 * (height + width);

// print the value of perimeter
cout << "Perimeter: " << perimeter;
return 0;
}
