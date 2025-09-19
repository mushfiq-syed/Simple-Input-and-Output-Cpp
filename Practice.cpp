#include <iostream>
int main()
{
    std::cout << "Enter an integer: " "\n";
    int x {};
    std::cin >> x;
    std::cout << "Enter another integer: " "\n";
    int y {};
    std::cin >> y;
    std::cout << x << " + " << y << " is " << (x+y) << '\n';
    std::cout << x << " - " << y << " is " << (x-y) << '\n';
    std::cout << x << " x " << y << " is " << (x*y) << '\n';
    std::cout << x << " ÷ " << y << " is " << (x/y) << '\n';
    std::cout << "Double " << x << " is " << (x*2) << '\n';
    std::cout << "Triple " << y << " is " << (y*3) << '\n';
    return 0;
}
