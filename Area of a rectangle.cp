#include <iostream>
#include <cmath>

//* a program that calculates and displays the area of any rectangle.*/

int main()
{
double width, length, area;
std::cout << "Enter the width of the rectangle: ";
std::cin >> width;
std::cout << "\n";
std::cout << "Enter the length: ";
std::cin >> length;
std::cout << "\n";

if (width < length)
{
area = width * length;
std::cout << "The area of the rectangle is: " << area << std::endl;
std::cout << "\n";
} else {
std::cout << "Error, complex infinity!" << std::endl;
std::cout << "\n";
}
return 0;
}