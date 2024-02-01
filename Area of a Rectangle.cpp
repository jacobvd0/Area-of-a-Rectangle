#include <iostream>

float calcArea(float w, float h) {
    return w * h;
}

int main()
{
    float rectWidth = 0.0f;
    float rectHeight = 0.0f;

    

    std::cout << "Area of a Rectangle)" << std::endl;
    
    std::cout << "Input Width: ";
    std::cin >> rectWidth;
    std::cout << "\n";
    
    std::cout << "Input Height: ";
    std::cin >> rectHeight;
    std::cout << "\n";
    
    
    
    
    std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
    std::cout << "Area: " << calcArea(rectWidth, rectHeight) << std::endl;
}
