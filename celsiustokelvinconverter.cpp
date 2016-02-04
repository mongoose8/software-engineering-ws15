#include "celsiustokelvinconverter.hpp"

#include <string>




/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double CelsiusToKelvinConverter::convert(double inCelsius){

 if (inCelsius < -273.15)
  {
   throw std::out_of_range("Input value is below -273.15°C!");
   }
 
 if(decorate == nullptr)
  return inCelsius+273;

 else
  return decorate->convert(inCelsius+273); 

}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}
