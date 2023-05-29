#include <iostream>
#include <cmath>

int main() {
    // Exercise 2
    const double pi = 3.14;
    double radius = 0;
    double area = 0;

    std::cout << "Enter the radius of the circle: ";

    std::cin >> radius;

    area = pow(radius, 2) * pi;

    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
