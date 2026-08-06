#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, length, width, side;
 

    // Take a decision about this area section.
    
    cout << "===== Area Calculator =====\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Square\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
   // make It Optional;

    switch (choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of Circle = " << 3.14159 * radius * radius;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area of Rectangle = " << length * width;
            break;

        case 3:
            cout << "Enter side of square: ";
            cin >> side;
            cout << "Area of Square = " << side * side;
            break;

        default:
            cout << "Invalid choice! Please select 1, 2, or 3.";
            break;
    }

    return 0;
}
