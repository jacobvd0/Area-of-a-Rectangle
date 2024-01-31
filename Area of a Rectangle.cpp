#include <iostream>

int main()
{
    float rectWidth = 0.0f;
    float rectHeight = 0.0f;
    float rectArea = 0.0f;

    

    std::cout << "Area of a Rectangle)" << std::endl;
    
    std::cout << "Input Width: ";
    std::cin >> rectWidth;
    std::cout << "\n";
    
    std::cout << "Input Height: ";
    std::cin >> rectHeight;
    std::cout << "\n";
    
    rectArea = rectWidth * rectHeight;
    
    
    std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
    std::cout << "Area: " << rectArea << std::endl;
}
