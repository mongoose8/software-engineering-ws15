#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double CelsiusToFahrenheitConverter::convert(double inCelsius){
  return inCelsius*32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
