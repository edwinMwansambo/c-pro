#include <iostream>
#include <cmath>

using namespace std;

double triArea(double base, double height) {
    double triVarr =0.5 * base * height;
    return triVarr;
}

double RectArea(double length, double width) {
    double RectVarr =length * width;
    return RectVarr;
}

double SquArea(double side) {
    double SquVarr = side * side;
    return SquVarr;
}

int main() {
    while (true) {
        cout << "Please select the area of the shape to calculate : " << endl;
        cout << "1. Triangle \n" ;
        cout << "2. Rectangle \n" ;
        cout << "3. Square \n" ;
        cout << "4. Quit Program \n";

        int select;
        cout << "Enter Selection : ";
        cin >> select;

        if (select == 1) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = TriangleArea(base, height);
            cout << "The area of the triangle is: " << area << endl;
        } else if (select == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = RectArea(length, width);
            cout << "The area of the rectangle is: " << area << "\n\n";
        } else if (select == 3) {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = SquArea(side);
            cout << "The area of the square is: " << area << endl;
        } else if (select == 4) {
            cout << "Exiting the program..." << endl;
            break;
        } else {
            cout << "Your input was : " << select<<" which is an invalid input \n";
            cout <<"Please enter a valid input!!!";
        }
    }

    return 0;
}
