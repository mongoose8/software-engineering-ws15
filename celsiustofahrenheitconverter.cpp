#include "celsiustofahrenheitconverter.hpp"

#include <string>




double CelsiusToFahrenheitConverter::convert(double inCelsius){
  
 if(inCelsius < -273.15)
  {
        throw std::out_of_range("Input value is below -273.15");
        return 0;
  }



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
