#include "celsiustofahrenheitconverter.hpp"

#include <string>




double CelsiusToFahrenheitConverter::convert(double inCelsius){
  
 if(decorate == nullptr)
     return inCelsius*1.8+32;

 else
 return decorate->convert(inCelsius*1.8+32); 
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
