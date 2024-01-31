#include <iostream>

int main()
{
    float degCelsius = 78.0f;
    float degFahrenheit = 0.0f;

    

    std::cout << "Celsius to Fahrenheit)" << std::endl;
    
    std::cout << "Input Celsius: ";
    std::cin >> degCelsius;
    std::cout << "\n";
    
    degFahrenheit = (degCelsius * 9/5) + 32;
    
    std::cout << "Celsius:    " << degCelsius << std::endl;
    std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
}
