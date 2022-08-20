#include <iostream>

int main()
{
    // the "spaceship operator"...
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}